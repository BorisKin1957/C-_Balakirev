/* Продолжите программу. Определите в строке str количество фрагментов 'is' и
выведите в консоль полученное целое число.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.3

Sample Input:

My sister is a nervous girl, but she is very kind.
Sample Output:

3
 */

#include <stdio.h>
#include <string.h>

#define SYM "is" // Макрос для искомой подстроки

int main(void) {
    char str[100] = {0}; // Буфер для хранения вводимой строки
    // Считываем строку из stdin, оставляя место для '\0'
    fgets(str, sizeof(str) - 1, stdin);

    // Удаляем символ новой строки '\n' из конца строки
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте программу
    size_t count = 0; // Счётчик количества совпадений
    char *ptr = str; // Указатель для поиска подстроки
    size_t len = strlen(SYM); // Длина искомой подстроки

    // Цикл поиска всех НЕперекрывающихся вхождений подстроки SYM
    while ((ptr = strstr(ptr, SYM)) != NULL) {
        count++; // Увеличиваем счётчик при каждом совпадении
        ptr += len; // Перемещаем указатель за конец найденной подстроки
    }

    // Выводим результат
    printf("%zu\n", count); // Исправлено: используем %zu для size_t

    return 0;
}