/*Напишите программу, в которой объявляется макроопределение MAX_LENGTH с целочисленным 
значением 100. В функции main() реализовать чтение двух целочисленных положительных чисел, 
записанных в одну строчку через пробел, в переменные x и y (именно в таком порядке). 
Затем, выполнить проверку: если длина радиус-вектора с координатами (x, y) превышает 
значение MAX_LENGTH, то в консоль вывести сообщение (без кавычек):

"Radius length exceeds value of MAX_LENGTH"

Иначе вывести в консоль длину радиус-вектора в виде вещественного числа с точностью до сотых.

Напомню, что длина радиус-вектора с координатами (x, y) вычисляется по формуле:
length = sqrt(x^2 + y^2)
 

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.7.7

Sample Input:

50 20
Sample Output:

53.85
*/


#include <stdio.h>
#include <math.h>
#define MAX_LENGTH  100


int main(void)
{   
    int x, y;
    scanf("%d %d", &x, &y);

    double lenght = sqrt(x * x + y * y);
    //printf("%.2lf\n", lenght);
    lenght > MAX_LENGTH ? printf("Radius length exceeds value of MAX_LENGTH\n") :
    printf("%.2lf\n", lenght);

    return 0;
}