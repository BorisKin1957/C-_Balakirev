#include <stdio.h>
/* Продолжите программу, в которой выполняется чтение целочисленного 
неотрицательного значения в переменную angle (угол). 
Необходимо представить угол angle в диапазоне [0; 359]. 
То есть, все значения в 360 вычесть из переменной angle.

Например:

angle = 540; 540 - 360 = 180;
angle = 800; 800 - 2*360 = 80.*/
int main(void)
{
    int angle;
    scanf("%d", &angle);

    printf("%d", angle % 360);

    return 0;
}