#include <stdio.h>
#include <stdbool.h>
/* Напишите программу, которая считывает из входного потока stdin целое число и 
выводит в консоль значение 100, если число кратно 5, и 0 в противном случае.

P.S. Программу реализовать без применения условных операторов.

Sample Input:

15
Sample Output:

100*/

int main(void)
{
    int a;

    scanf("%d", &a);
    bool res = a % 5 == 0;
    printf("%d\n", 100 * res);

    return 0;
}