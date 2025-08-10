/*  Продолжите программу. Перед функцией main объявите прототип функции с именем
get_geom, которая принимает два целочисленных параметра, вычисляет их среднее
геометрическое по формуле:

g = sqrt(a * b)

и возвращает вычисленное значение g. Реализацию функции get_geom пропишите после
функции main. В функции main вызовите функцию get_geom для переменных a и b.
Вычисленное значение выведите в консоль в виде вещественного числа с точностью
до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.3.3

Sample Input:

5, 7
Sample Output:

5.92
 */

#include <math.h>
#include <stdio.h>

double get_geom(int, int);

int main(void) {
    int a, b;
    scanf("%d, %d", &a, &b);

    printf("%.2f\n", get_geom(a, b));

    return 0;
}
double get_geom(int a, int b) { return sqrt(a * b); }