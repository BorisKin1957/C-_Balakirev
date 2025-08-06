/* Продолжите программу. В переменную str считывается строка в формате:

<наименование товара>: <высота> x <ширина> x <длина>.

(Символ x - латинская буква.) Значения высоты, ширины и глубины представлены
целыми числами. Необходимо выделить их из строки и сохранить в целочисленные
переменные: h (высота), w (ширина), d (длина).

P. S. В консоль ничего выводить не нужно. Строка str меняться не должна.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.3

Sample Input:

флэшка: 10 x 50 x 100
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте программу
    int h, w, d;
    char *ptr = str;
    ptr = strchr(str, ' ');
    sscanf(ptr, " %d x %d x %d", &h, &w, &d);

    printf("h = %d, w = %d, d = %d\n", h, w, d);

    //__ASSERT_TESTS__

    return 0;
}