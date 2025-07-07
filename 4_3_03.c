/*  Напишите программу, которая читает из входного потока натуральное число n (целое, положительное). 
Затем, с помощью цикла do-while вычислить сумму следующего ряда:

S = 1 + 1/2 + 1/3 + ... + 1/n
 
Значение суммы вывести в консоль в виде вещественного числа с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.3.4

Sample Input:

7
Sample Output:

2.59
 */

#include <stdio.h>

int main(void) {
    double s = 0;
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input");
        return 1;
    }

    do {
        s += 1.0 / n;
        n--;
    } while (n > 0);

    printf("%.2lf", s);

    return 0;
}