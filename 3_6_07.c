/*Продолжите программу решения следующей задачи. Диагональ экрана телевизора 
составляет N дюймов. Выразите диагональ экрана в сантиметрах, если в одном дюйме 
2,54 см. Результат округлите до целого числа сантиметров (по правилам математики). 
Результат выведите в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.11

Sample Input:

32
Sample Output:

81
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short N;
    float inch = 2.54;
    scanf("%hu", &N);

    double diagonal = N * inch;
   /*
    //если остаток от деления меньше 0.5 то округляем в большую сторону
    if ((ceil(diagonal) - diagonal) < 0.5) diagonal = ceil(diagonal);
    else diagonal = floor(diagonal); */

    printf("%hu\n", (unsigned short)round(diagonal));

    return 0;
}