/* Продолжите программу. В переменную str считывается строка в формате:

csv: <число 1>; <число 2>; <число 3>; ...; <число N>

(после точки с запятой может быть любое число пробелов от 0 и выше).

Числа представлены вещественными значениями, а их общее количество может быть
любым, но не менее 1 и не более 50. Необходимо выделить из строки все числа и
сохранить их в массиве csv типа double в порядке записи в строке.

P. S. В консоль ничего выводить не нужно. Строка str меняться не должна.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.4

Sample Input:

csv: 0.5; 24.35; -45.36; 100.0;65.3; -44.3
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[200] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте программу

    double csv[50] = {0};     // массив для хранения чисел
    double *ptr_csv = csv;    // указатель на массив csv
    size_t len = strlen(str); // длина строки str
    char *ptr = str;          // указатель на строку str
    // отправляем первое число в массив csv
    *ptr_csv++ = atof((ptr = strchr(ptr, ':')) + 1);
    // отправляем остальные числа в массив csv
    while ((ptr = strchr(ptr, ';')) != NULL && ptr - str < len)
        *ptr_csv++ = atof(ptr++ + 1);

    // Вывод результата (для проверки)
    // for (size_t i = 0; i < ptr_csv - csv; i++) {
    //     printf("%.2f ", csv[i]);
    // }
    // printf("\n");

    //__ASSERT_TESTS__

    return 0;
}