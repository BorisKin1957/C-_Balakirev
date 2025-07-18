/* Продолжите программу, которая читает из входного потока 9 целых чисел,
записанных в одну строчку через пробел, и помещает их по порядку в двумерный
целочисленный массив ar_2D размерностью 3 x 3. В тестах гарантируется наличие
минимум 9 целых чисел.

P. S. В консоль ничего выводить не нужно.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.6.5

Sample Input:

1 2 3 4 5 6 7 8 9
 */

#include <stdio.h>

int main(void) {

    int ar_2D[3][3] = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            scanf("%d", &ar_2D[i][j]);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", ar_2D[i][j]);
        printf("\n");
    }

    // __ASSERT_TESTS__
    return 0;
}