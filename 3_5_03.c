#include <stdio.h>
/*Необходимо выключить 7 и 6 биты переменной bits (установить в 0). 
Результат сохраните в байтовой беззнаковой переменной res и выведите ее значение в 
консоль в виде целого десятичного числа.

P.S. Нумерация бит числа идет в порядке от младшего к старшему и начинается с нуля: 7, 6, 5, 4, 3, 2, 1, 0

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.5.5

Sample Input:

200
Sample Output:

8*/

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    int mask_0 = 0b11000000;
    int res = bits & ~mask_0;

    printf("%d\n", res);

    return 0;
}