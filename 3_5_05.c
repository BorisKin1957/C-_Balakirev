#include <stdio.h>
/* Необходимо переключить 3 и 0 биты переменной bits. Результат сохраните в 
байтовой беззнаковой переменной res и выведите ее значение в консоль в виде целого 
десятичного числа.

P.S. Нумерация бит числа идет в порядке от младшего к старшему и начинается с нуля: 
7, 6, 5, 4, 3, 2, 1, 0

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.5.7

Sample Input:

43
Sample Output:

34
*/

int main(void)
{
    unsigned char bits, res; 

    scanf("%hhu", &bits);

    res = bits ^ 0b1001;

    printf("%d\n", res);

    return 0;
}