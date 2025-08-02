/*  Продолжите программу. В строке str необходимо заменить все подряд идущие
дефисы (например: --, ---, ---- и т.д.) на один дефис (-). Выведите в консоль
полученную строку.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.5

Sample Input:

cpp--znacheniya----parametrov-funkcii-po----umolchaniyu
Sample Output:

cpp-znacheniya-parametrov-funkcii-po-umolchaniyu

Верно решили 849 учащихся
Из всех попыток 46% верных
 Отлично!
  */

#include <stdio.h>
#include <string.h>

// Макрос для определения символа, который нужно обработать
#define SYM '-'

int main(void) {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте программу
    // Буфер для хранения результата (тоже 100 символов)
    char result[100] = {0};
    // Указатель на текущую позицию в результате
    char *dst = result;

    // Проходим по каждому символу входной строки
    for (char *src = str; *src != '\0'; src++) {
        // Если текущий символ — это SYM ('-') и следующий символ НЕ SYM:
        if (*src == SYM && *(src + 1) != SYM) {
            // Добавляем SYM в результат
            *dst++ = SYM;
        }
        // Если текущий символ — это SYM, но следующий тоже SYM:
        else if (*src == SYM) {
            // Пропускаем этот символ (не добавляем в результат)
            continue;
        }
        // Если текущий символ не SYM:
        else {
            // Добавляем его в результат
            *dst++ = *src;
        }
    }

    // Выводим преобразованную строку
    puts(result);

    return 0;
}