#include <stdio.h>
/* Напишите программу, которая читает из входного потока целое неотрицательное число 
и выполняет целочисленное деление этого числа на 4 с использованием сдвиговых битовых 
операций. Результат выведите в консоль в виде целого десятичного числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.5.8

Sample Input:

7
Sample Output:

1
*/

int main(void)
{
    unsigned char bits; 
    scanf("%hhu", &bits);

    printf("%d\n", bits >> 2); // целочиленное деление на 4

    return 0;
}