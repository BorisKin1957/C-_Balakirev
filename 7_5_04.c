/* Напишите программу, которая в функции main читает из входного потока слова
(разделены пробелом). Максимальное количество слов не более 20, а максимальная
длина каждого слова не более 50 символов.

Объявите функцию со следующей сигнатурой:

int is_correct(const char* str);

Функция is_correct должна проверять, что в строке содержится фрагмент "ra" без
учета регистра. Если это так, то она возвращает 1, иначе 0. Определите на эту
функцию указатель нового типа FUNC_CORRECT (тип данных).

Объявите еще одну функцию с сигнатурой:

int get_correct_words(const char (*words)[50], int count_words, FUNC_CORRECT
filter);

Функция get_correct_words должна подсчитывать количество корректных слов (для
которых is_correct возвращает 1) в массиве words и возвращать вычисленное
значение.

В функции  main (для прочитанных из входного потока слов) вызовите функцию
get_correct_words с фильтром is_correct и выведите в консоль число корректных
слов.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.5.9

Sample Input:

Radio Dennis Ritchie Ken Thompson Raichle Sergey

Sample Output:

2


GIGACODE programming

*/

#include <ctype.h> // Для функции tolower()
#include <stdio.h>
#include <string.h>


// Тип для указателя на функцию-фильтр
typedef int (*FUNC_CORRECT)(const char *);

// Функция проверки наличия подстроки "ra" (без учёта регистра)
int is_correct(const char *str) {
    // Проверяем все пары соседних символов
    for (int i = 0; str[i] && str[i + 1]; i++) {
        // Сравниваем символы в нижнем регистре
        if (tolower((unsigned char)str[i]) == 'r' &&
            tolower((unsigned char)str[i + 1]) == 'a') {
            return 1; // Найдена подстрока "ra"
        }
    }

    return 0; // Подстрока не найдена
}

// Функция подсчёта слов, удовлетворяющих условию фильтра
int get_correct_words(const char (*words)[50], int count_words,
                      FUNC_CORRECT filter) {
    int correct_count = 0;

    // Обходим все слова
    for (int i = 0; i < count_words; i++) {
        if (filter(words[i])) {
            correct_count++; // Увеличиваем счётчик подходящих слов
        }
    }

    return correct_count;
}

int main(void) {
    char line[1000]; // Буфер для хранения всей строки
    char words[20][50]; // Массив для хранения отдельных слов
    size_t count = 0; // Счётчик прочитанных слов

    // Чтение строки из входного потока
    if (fgets(line, sizeof(line), stdin) != NULL) {
        const char *ptr = line;
        int chars_read;

        // Парсинг строки на слова
        while (sscanf(ptr, "%49s%n", words[count], &chars_read) == 1) {
            ptr += chars_read; // Перемещаем указатель
            count++;           // Увеличиваем счётчик
            if (count >= 20)
                break; // Ограничение по количеству слов
        }
    }

    // Вызов функции подсчёта подходящих слов
    int result = get_correct_words(words, count, is_correct);

    // Вывод результата
    printf("%d\n", result);

    return 0;
}