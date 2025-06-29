/*Продолжите программу решения следующей задачи. Каждый день во время конференции 
расходуется N пакетиков чая. Конференция длится 7 дней. В пачке чая 100 пакетиков. 
Какого наименьшего количества пачек чая хватит на все дни конференции? 
Результат выведите в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.10

Sample Input:

90
Sample Output:

7
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short N, days = 7, count = 100;
    scanf("%hu", &N);

    double result = (double)N / count * days;
    result = ceil(result);

    printf("%d", (int)result);

    return 0;
}