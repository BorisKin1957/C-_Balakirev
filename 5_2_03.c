/* В программе в функции main() объявите массив типа long с именем digits и
длиной 128 элементов. Выполните его инициализацию так, чтобы элемент с индексом
16 был равен 4, элемент с индексом 32 был равен 5, элемент с индексом 64 был
равен 6, а остальные элементы равны 0.

P. S. В консоль ничего выводить не нужно.
 */

#include <stdio.h>

int main(void) {
    // здесь продолжайте программу
    long digits[128] = {[16] = 4, [32] = 5, [64] = 6};

    for (int i = 0; i < 128; i++)
        printf("%ld ", digits[i]);

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и
    // должно идти непосредственно перед return 0)
    return 0;
}