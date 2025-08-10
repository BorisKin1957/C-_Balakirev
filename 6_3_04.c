/* Напишите программу, которая читает из входного потока радиус круга в виде
вещественного числа. До функции main объявите прототип функции с именем
circle_len, которая должна принимать радиус круга, вычислять его длину по
формуле:

L
=
2
⋅
π
⋅
R
L=2⋅π⋅R

и возвращать вычисленное значение L. Значение
π
π определить через директиву #define в виде макроопределения PI и взять
равным 3.1415. Реализацию функции circle_len пропишите после функции main. В
функции main вызовите функцию circle_len и выведите в консоль вычисленное
значение длины круга в виде вещественного числа с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.3.6

Sample Input:

3.0
Sample Output:

18.85
 */

#include <stdio.h>
#define PI 3.1415

double circle_len(double);

int main(void) {
    double rad;
    scanf("%lf", &rad);

    printf("%.2lf", circle_len(rad));

    return 0;
}

double circle_len(double rad) { return 2 * PI * rad; }