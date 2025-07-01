/*Продолжите программу, в которой определена макро-функция с именем GIPOT, вычисляющая длину 
гипотенузы по двум катетам прямоугольного треугольника. Вызовите макрос GIPOT для величин a+3 и b-2. 
Результат вызова сохраните в переменной length. Выведите в консоль значение переменной length с точностью до сотых.

Напомню, что длина гипотенузы вычисляется по формуле: 

c = sqrt(a^2 + b^2)

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.8.4

Sample Input:

8, 11
Sample Output:

14.21
*/

#include <math.h>
#include <stdio.h>

#define GIPOT(A, B) sqrt((A) * (A) + (B) * (B))

int main(void) {
    int a, b;
    if (scanf("%d, %d", &a, &b) != 2) {
        printf("Input error");
        return 1;
    }
    double lenght = GIPOT(a + 3, b - 2);
    printf("%.2lf", lenght);

    //__ASSERT_TESTS__

    return 0;
}