/* Продолжите программу. Замените в строке str все дефисы (-) фрагментом "-+-".
Выведите полученную строку в консоль. В тестах гарантируется, что результирующая
строка умещается в массив str.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.4

Sample Input:

https://proproprogs.ru/c_base/cpp-znacheniya-parametrov-funkcii-po-umolchaniyu
Sample Output:

https://proproprogs.ru/c_base/cpp-+-znacheniya-+-parametrov-+-funkcii-+-po-+-umolchaniyu
 */

#include <stdio.h>
#include <string.h>

#define OLD_Sym '-'
#define NEW_Sym "-+-"

int main(void) {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте программу
    char *ptr = str; // Указатель на начало исходной строки

    char result[100] = {0}; // Буфер для результата
    char new[2] = {0}; // Временный буфер для одного символа

    // Цикл перебора символов строки
    for (size_t i = 0; *(ptr + i) != '\0'; ++i) {
        // Если текущий символ совпадает с OLD_Sym
        if (*(ptr + i) == OLD_Sym)
            // Добавляем подстроку NEW_Sym в результат
            strcat(result, NEW_Sym);
        else {
            // Если символ не совпадает, добавляем его в результат
            new[0] = *(ptr + i); // Копируем символ в буфер
            strcat(result, new); // Добавляем символ в результат
        }
    }
    // Выводим преобразованную строку
    printf("%s\n", result);

    return 0;
}