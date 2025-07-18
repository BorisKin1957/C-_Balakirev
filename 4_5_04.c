/* Продолжите программу. Объявите указатель ptr_a на переменную a и указатель
ptr_b на переменную b. Выполните обмен значениями переменных a и b через
указатели ptr_a и ptr_b.

P. S. В консоль ничего выводить не нужно.
*/

#include <stdio.h>

int main(void) {
    short a, b, init_a, init_b;

    scanf("%hd, %hd", &a, &b);
    init_a = a;
    init_b = b;

    // здесь продолжайте программу
    short *ptr_a = &a, *ptr_b = &b;
    *ptr_a = *ptr_b; // init_b;
    *ptr_b = init_a;

    printf("a = %hd, b = %hd\n", a, b);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно
    //идти непосредственно перед return 0)
    return 0;
}