/* Напишите программу, которая читает из входного потока четыре целых числа a,
b, c, d, записанных в одну строчку через пробел. Необходимо определить войдет ли
в конверт с внутренними размерами a и b см прямоугольная открытка с размерами с
и d см. Для размещения открытки в конверте необходим зазор в 0,5 см с каждой
стороны. Вывести в консоль "yes", если входит и "no" если не входит.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.7.9

Sample Input:

5 10 9 3
Sample Output:

yes
 */

#include <stdio.h>

int main(void) {
    int a, b, c, d, tmp;
    float c_f, d_f;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (c < d) {
        tmp = c;
        c_f = (float)d + 0.5;
        d_f = (float)tmp + 0.5;
    } else {
        c_f = (float)c + 0.5;
        d_f = (float)d + 0.5;
    }

    a >= c_f &&b >= d_f ? printf("yes\n") : printf("no\n");

    return 0;
}