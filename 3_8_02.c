/*Продолжите программу, в которой нужно определить макро-функцию с именем GET_MAX, 
возвращающую максимальное из двух чисел. Вызовите в функции main макрос GET_MAX следующим образом:

double res = GET_MAX(val_1 + 1, val_2 - 1) / (val_1 + val_2);
Выведите в консоль значение переменной res с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.8.3

Sample Input:

0.3; -45.3
Sample Output:

-0.03
*/

#include <stdio.h>

#define GET_MAX(A, B) ((A) > (B) ? (A) : (B))

int
main (void)
{
    double val_1, val_2;
    if (scanf ("%lf; %lf", &val_1, &val_2) != 2)
        {
            printf ("Input error");
            return 0;
        }

    double res = GET_MAX (val_1 + 1, val_2 - 1) / (val_1 + val_2);
    printf ("%.2lf\n", res);
    //__ASSERT_TESTS__

    return 0;
}