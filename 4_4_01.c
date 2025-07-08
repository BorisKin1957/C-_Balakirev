
/* Допишите программу, в которой проверяется, что текущие координаты x, y 
не выходят за диапазон [1; n] - для x и [1; m] - для y. Если условие не 
выполняется (хотя бы одна координата выходит из диапазона), то функция printf() 
не должна выполняться. Реализовать эту логику с использованием оператора continue.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.4.2

Sample Input:

1, 5
5, 5
6, 1
1, 7
2, 8
Sample Output:

(1, 5)
(5, 5)
(1, 7) */

#include <stdio.h>

int main(void) {
    int n = 5, m = 7;
    int total = 5;

    for (int i = 0; i < total; ++i) {
        int x, y;
        scanf("%d, %d", &x, &y);

        // здесь прописывайте проверк
        if (x < 1 || x > n || y < 1 || y > m)
            continue;

        printf("(%d, %d)\n", x, y);
    }

    return 0;
}