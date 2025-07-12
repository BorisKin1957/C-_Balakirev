/* Продолжите программу. Необходимо прочитать из входного потока пять целых
чисел, записанных в одну строчку через пробел, в массив с именем digits длиной
пять элементов типа int. Используя оператор цикла for, выведите в консоль все
значения элементов массива digits в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.1.8

Sample Input:

3 6 78 4 101
Sample Output:

3 6 78 4 101
 */

#include <stdio.h>
#define LENGHT 5

int main(void) {
    // здесь продолжайте программу
    int digits[LENGHT];

    for (int i = 0; i < LENGHT; i++) {
        scanf("%d", &digits[i]);
        printf("%d ", digits[i]);
    }

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и
    // должно идти непосредственно перед return 0)
    return 0;
}