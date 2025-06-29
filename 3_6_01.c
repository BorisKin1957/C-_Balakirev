#include <stdio.h>
#include <stdlib.h>
/*С помощью функции rand() сгенерируйте четыре псевдослучайных числа, 
присвойте их переменным и по порядку выведите их в консоль в одну строчку через пробел.
*/
int main(void)
{
    int a = rand(), b = rand(), c = rand(), d = rand();
    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}