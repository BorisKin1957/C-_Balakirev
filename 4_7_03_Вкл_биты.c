/* Напишите программу, которая читает из входного потока целое число в
переменную count типа int. В каждом байте переменной count нужно включить 3-й и
0-й биты (нумерация бит в байте: 7, 6, 5, 4, 3, 2, 1, 0). Вывести в консоль
полученное значение count в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.7.7

Sample Input:

0
Sample Output:

151587081
 */

#include <stdio.h>

int main(void) {
    int bits;

    char mask_on = 0b1001; // биты 0, 3 включить
    char *p = (char *)&bits;
    scanf("%d", &bits);

    for (int i = 0; i < 4; i++) {
        *p = *p | mask_on;
        p += 1;
    }

    printf("%d\n", bits);

    return 0;
}