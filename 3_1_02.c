#include <stdio.h>
#include <stdbool.h>
/* Напишите программу, которая считывает из входного потока stdin 
вещественное число. Если его целая часть кратна 5, то в консоль следует
 вывести число 1, иначе - число 0.

P.S. Программу реализовать без применения условных операторов.*/

int main(void)
{
    float a;

    scanf("%f", &a);
    bool res = (int)a % 5 == 0;
    printf("%d\n", res);

    return 0;
}