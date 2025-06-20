#include <stdio.h>
/*Напишите программу для чтения из входного потока stdin чисел, записанных в одну 
строчку через запятую, в следующие переменные (в порядке их объявления):

long long var_ll = 0;
long double var_ld = 0.;
short sh = 0;
Выведите в выходной поток с помощью функции printf() переменные var_ll и sh в одну 
строчку через пробел.
Sample Input:

1234567890123, 5643.001, 1200
Sample Output:

1234567890123 1200 */

int main(void)
{
    long long var_ll = 0;
    long double var_ld = 0.;
    short sh = 0;

    scanf("%lld, %Lf, %hd", &var_ll, &var_ld, &sh);
    printf("%lld %d", var_ll, sh);

    return 0;
}