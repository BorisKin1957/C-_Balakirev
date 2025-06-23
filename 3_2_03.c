#include <stdio.h>
/*Напишите программу чтения двух целых чисел из входного потока, 
записанных в одну строчку через пробел. Если эти числа равны, 
то вывести в консоль любое из этих чисел, а иначе - в порядке возрастания.*/

int main(void)
{
    int m, n, result;
    if(scanf("%d %d", &m, &n) != 2) {
        printf("Input error.");
        return 0;
    }

    if (m == n)
        printf("%d", m);
    else if (m < n)
            printf("%d %d", m, n);
         else printf("%d %d", n, m);

    return 0;
}