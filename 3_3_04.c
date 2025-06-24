#include <stdio.h>
/*Напишите программу, которая считывает из входного потока два целых числа, 
записанных в одну строчку через пробел, и помещает их в переменные width и height. 
Затем, нужно сформировать третью целочисленную переменную border, как сумму 
максимального из прочитанных чисел плюс восемь:

border = max(width, height) + 8

Результат вывести в консоль в виде одного целого числа.

Sample Input:

8 11
Sample Output:

19
*/

int main(void)
{
    int weight, height, border;
    scanf("%d %d", &weight, &height);
 
    printf("%d", weight > height ? (border = weight + 8) : (border = height + 8));

    return 0;
}