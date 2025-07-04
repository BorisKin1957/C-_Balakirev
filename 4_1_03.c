/*Напишите программу, которая читает из входного потока натуральное число n 
(целое, положительное), которое содержит от 2-х и более цифр. Используя цикл while, 
вычислить сумму цифр числа n. Результат вывести в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.1.5

Sample Input:

123
Sample Output:

6
*/

#include <stdio.h>

int main(void) {
    int n, sum = 0;

    if (scanf("%d", &n) != 1 || n < 10) {
        printf("Ошибка ввода!\n");
        return 1;
    }
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d", sum);

    return 0;
}