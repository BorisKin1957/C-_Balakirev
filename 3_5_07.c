#include <stdio.h>
/* Напишите программу, которая читает из входного потока целое неотрицательное число (тип int)
 и выполняет умножение этого числа на 8 с использованием сдвиговых битовых операций. 
 Результат выведите в консоль в виде целого десятичного числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.5.9

Sample Input:

64
Sample Output:

512
*/

int main(void)
{
    unsigned char bits; 
    scanf("%hhu", &bits);

    printf("%d\n", bits << 3); // целочиленное умножение на 8

    return 0;
}