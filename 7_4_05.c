/* Продолжите программу. Объявите функцию со следующей сигнатурой:

char * merge_string(const char* str1, const char* str2);


Данная функция должна выделить память под новую строку так, чтобы в нее
помещались все символы первой (str1) и второй (str2) строк. Затем, в новую
строку скопировать сначала содержимое первой строки (только символы строки), а
следом за ней содержимое второй строки. В конце не забудьте добавить символ
'\0', чтобы сформировать корректную Си-строку. После объединения функция
merge_string должна вернуть адрес сформированной строки.

В функции main вызовите функцию merge_string для объединения строк str_1 и str_2
(именно в таком порядке). Выведите в консоль полученную строку.

P. S. Не забудьте в конце программы освободить выделенную память. Из-за тестовой
системы прототипы функций использовать нельзя.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.4.9

Sample Input:

First,
Second
Sample Output:

First,Second
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_ln(char *buffer, size_t max_len) {
    fgets(buffer, max_len - 1, stdin);
    char *ptr_n = strrchr(buffer, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';
}

// Объявление функции
char *merge_string(const char *str1, const char *str2);

int main(void) {
    char str_1[200] = {0};
    char str_2[200] = {0};

    get_ln(str_1, sizeof(str_1));
    get_ln(str_2, sizeof(str_2));

    // Вызов функции и обработка результата
    char *merged = merge_string(str_1, str_2);
    if (merged != NULL) {
        printf("%s\n", merged);
        free(merged); // Освобождение памяти
    }

    return 0;
}

// Реализация функции
char *merge_string(const char *str1, const char *str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    // Выделение памяти под объединённую строку
    char *result = malloc(len1 + len2 + 1);
    if (result == NULL) {
        return NULL; // Ошибка выделения памяти
    }

    // Копирование первой строки
    strcpy(result, str1);
    // Добавление второй строки
    strcat(result, str2);

    return result;
}
