#include <stdio.h>
#include <stdlib.h>
/*программу, которая генерирует псевдослучайные целые числа в диапазоне от a до b 
(включительно). Числа a и b (a < b) считываются из входного потока. 
Для формирования диапазона значений используйте арифметическую операцию вычисления 
целого остатка от деления:

y = rnd % (b − a + 1) + a

где 

rnd - случайное целое значение в диапазоне [0; RAND_MAX]. 
Сгенерируйте десять псевдослучайных чисел и выведите их в консоль в одну строчку через пробел.

Sample Input:
-10 -3

Sample Output:
-9 -7 -4 -6 -9 -6 -4 -4 -8 -10
*/


int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    // Вычисляем разницу один раз для оптимизации
    int denom = b - a + 1;

    printf("%d %d %d %d %d %d %d %d %d %d\n",
           rand() % denom + a,
           rand() % denom + a,
           rand() % denom + a,
           rand() % denom + a,
           rand() % denom + a,
           rand() % denom + a,
           rand() % denom + a,
           rand() % denom + a,
           rand() % denom + a,
           rand() % denom + a);

    return 0;
}