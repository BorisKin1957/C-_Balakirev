/*Продолжите программу, которая должна вычислять первые n членов 
геометрической прогрессии и выводить их по порядку в одну строчку через пробел. 
Члены прогрессии вычисляются по следующей схеме:

b1 - первый член;
b1 * q - второй член;
b1 * q^2 - третий член;
...
b1 * q^(n-1) - n-й член

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.2.4

Sample Input:

2; 3; 5
Sample Output:

2 6 18 54 162
*/

#include <math.h>
#include <stdio.h>


int main(void) {
    int b1, q, n;
    scanf("%d; %d; %d", &b1, &q, &n);

    for (int i = 0; i < n; i++)
        printf("%d ", b1 * (int)pow(q, i));

    return 0;
}