#include <stdio.h>
#include <stdlib.h>
#define RAND_MAX 32767

/* Продолжите программу, которая генерирует псевдослучайные вещественные числа в диапазоне 
от a до b (включительно). Целые числа a и b (a < b) считываются из входного потока. 
Значения формируются путем уменьшения исходного диапазона значений [0; RAND_MAX] до 
диапазона [a; b], как показано на рисунке ниже.


Используйте для этого формулу:

Сгенерируйте десять псевдослучайных чисел и выведите их в консоль в одну строчку через пробел с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.5

Sample Input:

-5 5
Sample Output:

-4.99 0.64 -3.07 3.09 0.85 -0.20 -1.50 3.96 3.23 2.47*/

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    double factor = 1 / 32767.0 * (b - a);
    double r1 = factor * rand() + a, 
        r2 = factor * rand() + a, 
        r3 = factor * rand() + a,
        r4 = factor * rand() + a,
        r5 = factor * rand() + a,
        r6 = factor * rand() + a,
        r7 = factor * rand() + a,
        r8 = factor * rand() + a,
        r9 = factor * rand() + a,
        r10 = factor * rand() + a;
    printf("%0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf\n", 
        r1, r2, r3, r4, r5, r6, r7, r8, r9, r10);

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#define RAND_MAX 32767

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    double factor = 1 / 32767.0 * (b - a);
    printf("%0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf\n", 
        factor * rand() + a, 
        factor * rand() + a, 
        factor * rand() + a,
        factor * rand() + a,
        factor * rand() + a,
        factor * rand() + a,
        factor * rand() + a,
        factor * rand() + a,
        factor * rand() + a,
        factor * rand() + a);

    return 0;
}
*/