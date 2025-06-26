#include <stdio.h>
/*Необходимо проверить, что биты 3 и 5 переменной bits включены (установлены в 1). 
Если это так, то выведите в консоль значение переменной bits в виде целого десятичного 
числа, иначе целое число -1.

P.S. Нумерация бит числа идет в порядке от младшего к старшему и начинается с нуля: 
7, 6, 5, 4, 3, 2, 1, 0

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.5.4

Sample Input:

43
Sample Output:

43
*/

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);
    
    int mask = 0b101000; // разряды 3, 5 установлены в 1
 
    printf("%d", (bits | mask) == bits ? bits : -1);
    

    return 0;
}