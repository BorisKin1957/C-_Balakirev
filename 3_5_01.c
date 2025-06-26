#include <stdio.h>
/*Инвертируйте все биты переменной b и сохраните результат в переменной not_b. 
Выведите в консоль значение переменной not_b в виде целого десятичного числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.5.3

Sample Input:

1
Sample Output:

254*/

int main(void)
{
    unsigned char b, not_b;
    scanf("%hhu", &b);
    not_b = ~b;

    printf("%hhu\n", not_b);

    return 0;
}