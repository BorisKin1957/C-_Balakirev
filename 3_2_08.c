#include <stdio.h>
/* Напишите программу чтения трех вещественных чисел из входного потока, 
записанных в одну строчку через запятую. Необходимо определить наименьшее среди них и 
вывести его в консоль с точностью до сотых.*/

int main(void)
{
    float a, b, c, min;
    if(scanf("%f,%f,%f", &a, &b, &c) != 3) {
        printf("Input error.");
        return 0;
    }
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("%.2f", min);

    return 0;
}