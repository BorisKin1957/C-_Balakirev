/*Напишите программу, которая читает из входного потока натуральное число n 
(целое, положительное). Вычислите с помощью цикла while сумму ряда:

S = 1/1^2 + 1/2^2 + 1/3^2 + ... + 1/n^2.

Выведите результат в консоль в виде вещественного числа с точностью до тысячных.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.1.4

Sample Input:

8
Sample Output:

1.527
*/


#include <stdio.h>

int main ()
{
    int n;
    double sum = 0.0;
    scanf ("%d", &n);
    while (n > 0)
        {
            sum += 1.0 / (n * n);
            n--;
        }

    printf ("%.3lf", sum);

    return 0;
}