/*Напишите программу, в которой задаются два макроопределения MAX_WIDTH и MAX_HEIGHT 
с целочисленными значениями 256 и 500 соответственно. Далее, в функции main() следует 
реализовать чтение двух вещественных чисел, записанных в одну строчку через пробел, 
в переменные width и height (именно в таком порядке). Затем, выполнить проверку: 
если значение width больше MAX_WIDTH, то width должна быть равна MAX_WIDTH. 
И аналогичную проверку реализовать для переменной height. В конце программы вывести 
в консоль значения переменных width и height в одну строчку через пробел с точностью 
до десятых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.7.6

Sample Input:

257.45 87.32
Sample Output:

256.0 87.3
*/

#include <stdio.h>
#define MAX_WIDTH   256
#define MAX_HEIGHT  500

int main(void)
{   
    double width, heigh;
    scanf("%lf %lf", &width, &heigh);

    width > MAX_WIDTH ? width = MAX_WIDTH : width;
    heigh > MAX_HEIGHT ? heigh = MAX_HEIGHT : heigh;
    printf("%.1lf %.1lf\n", width, heigh);

    return 0;
}