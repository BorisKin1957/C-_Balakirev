#include <stdio.h>
#include <stdlib.h>
/*Продолжите программу, которая генерирует семь целых псевдослучайных чисел 
в диапазоне от 0 до N (включительно). Число N меньше значения константы RAND_MAX. 
Для формирования диапазона значений используйте арифметическую операцию вычисления 
целого остатка от деления. Выведите сгенерированные числа в консоль в одну 
строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.3

Sample Input:

5
Sample Output:

5 5 4 4 5 4 0
*/

int main(void)
{
    int N;
    scanf("%d", &N);
    int rand1 = rand() % (N + 1), rand2 = rand() % (N + 1), 
        rand3= rand() % (N + 1), rand4 = rand() % (N + 1), 
        rand5 = rand() % (N + 1), rand6 = rand() % (N + 1), 
        rand7 = rand() % (N + 1);
    printf("%d %d %d %d %d %d %d\n", rand1, rand2, rand3, rand4, rand5, rand6, rand7);

    return 0;
}