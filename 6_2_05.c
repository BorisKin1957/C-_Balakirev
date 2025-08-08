/* Напишите программу, которая читает из входного потока два целых числа в
переменные x, y, записанных в одну строчку через пробел. Объявите функцию с
именем get_length, которая возвращает длину радиус-вектора с координатами (x,
y).

Напомню, что длина радиус-вектора вычисляется по формуле:

len = sqrt(x^2 + y^2)


В функции main вызовите функцию get_length с прочитанными значениями x, y и
выведите в консоль длину радиус-вектора с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.2.8

Sample Input:

-25 78
Sample Output:

81.91
 */

#include <math.h>
#include <stdio.h>


double get_length(int x, int y) { return sqrt(x * x + y * y); }

int main(void) {
    // здесь продолжайте функцию main
    int a, b;
    if (scanf("%d %d", &a, &b) == 2)
        printf("%.2lf", get_length(a, b));

    return 0;
}