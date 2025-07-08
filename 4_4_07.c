/* Напишите программу, которая читает из входного потока натуральное число n. 
Определить, является ли число n простым (то есть, делится нацело только на само 
себя и на 1). Вывести на экран "yes", если n простое и "no" - в противном случае.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.4.8

Sample Input:

13
Sample Output:

yes

Верно решили 899 учащихся
Из всех попыток 53% верных
 Так точно!
  */

#include <stdio.h>

int main(void) {
    int n, i;

    scanf("%d", &n);
    for (i = 2; i < n; i++)
        if (n % i == 0) {
            printf("no");
            break;
        }

    if (i == n)
        printf("yes");

    return 0;
}