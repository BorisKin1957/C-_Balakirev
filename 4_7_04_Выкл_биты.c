/*Напишите программу, которая читает из входного потока целое число в переменную
count типа int. В каждом байте переменной count нужно выключить 7-й, 6-й и 1-й
биты (нумерация бит в байте: 7, 6, 5, 4, 3, 2, 1, 0). Вывести в консоль
полученное значение count в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.7.8

Sample Input:

65535
Sample Output:

15677
 */

#include <stdio.h>

int main(void) {
    int count;

    char mask_0 = 0b11000010; // выключить 7-й, 6-й и 1-й биты
    char *p = (char *)&count;
    scanf("%d", &count);

    for (int i = 0; i < 4; i++) {
        *p = *p & ~mask_0;
        p += 1;
    }

    printf("%d\n", count);

    return 0;
}