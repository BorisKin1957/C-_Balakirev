#include <stdio.h>
/*Необходимо включить 4, 2 и 0 биты переменной bits (установить в 1). 
Результат сохраните в байтовой беззнаковой переменной res и выведите ее 
значение в консоль в виде целого десятичного числа.

P.S. Нумерация бит числа идет в порядке от младшего к старшему и начинается 
с нуля: 7, 6, 5, 4, 3, 2, 1, 0

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.5.6

Sample Input:

128
Sample Output:

149

*/

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    unsigned char mask_on = 0b10101; // биты 0, 2, 4 включить
    unsigned char res = bits | mask_on;

    printf("%hhu\n", res);

    return 0;
}