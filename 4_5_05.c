/* Продолжите программу. Объявите указатель ptr_a на переменную a и указатель ptr_b 
на переменную b. Вычислите произведение значений переменных a и b, используя указатели 
ptr_a и ptr_b. Результат присвойте переменной res и выведите ее в консоль в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.5.9

Sample Input:

8, 11
Sample Output:

88
 */


#include <stdio.h>

int main(void) {
    short a, b;

    scanf("%hd, %hd", &a, &b);

    // здесь продолжайте программу
    short *ptr_a = &a, *ptr_b = &b;
    int res = *ptr_a * *ptr_b;
    printf("%d", res);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно
    //идти непосредственно перед return 0)
    return 0;
}