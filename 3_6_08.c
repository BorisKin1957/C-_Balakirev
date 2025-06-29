/*Напишите программу чтения из входного потока вещественного значения угла, 
выраженного в градусах. Вычислите синус этого угла и выведите результат в 
консоль в виде вещественного значения с точностью до десятых.

P.S. Не забудьте перевести градусы в радианы по формуле: 

rad=grad⋅π/180 
Значение π=3.1415.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.12

Sample Input:

56.5
Sample Output:

0.8
*/


#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short grad;
    
    scanf("%hu", &grad);
    grad %= 360;
    float rad = grad * 3.1415 / 180;

    printf("%0.1f\n", sin(rad));

    return 0;

}