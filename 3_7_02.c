/*Необходимо определить два макроса: PI - значение числа пи (взять равным 3.1415) 
и GRAD - формула перевода из радиан в градусы (математически: 180 деленное на пи). 
Далее, в функции main() нужно объявить вещественную переменную с именем grad и 
присвоить ей значение градусов, переведенное из радиан переменной rad (перевод 
осуществляется простым умножением радиан на GRAD). Вывести в консоль значение переменной 
grad с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.7.5

Sample Input:

0.45
Sample Output:

25.78
*/

#include <stdio.h>
#define PI      3.1415
#define GRAD    180 / PI

int main(void)
{
    double rad;
    scanf("%lf", &rad);

    double grad = rad * GRAD;
    printf("%.2lf\n", grad);

    return 0;
}