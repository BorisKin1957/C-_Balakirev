/* Продолжите программу, в которой из консоли считываются целочисленные значения
в два массива с именами a и b, каждый размерностью 3 x 4. Объявите еще один
целочисленный двумерный массив res той же размерности, значения каждого элемента
которого должны быть равны сумме соответствующих элементов массивов a и b, то
есть, по следующей формуле:

res[i][j] = a[i][j] + b[i][j]

Выведите в консоль полученный массив res в виде таблицы целых чисел из 3 строк и
4 столбцов. В каждой строке числа должны быть записаны через пробел. В начале и
конце строк пробелов быть не должно.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.6.8

Sample Input:

1 2 3 4 5 6 7 8 9 10 11 12
2 3 2 0 5 3 5 8 1 24 32 10

Sample Output:

3 5 5 4
10 9 12 16
10 34 43 22
*/

#include <stdio.h>

#define ROWS 3
#define COLS 4

int main(void) {
    int a[ROWS][COLS] = {0};
    int b[ROWS][COLS] = {0};
    int res[ROWS][COLS] = {0}; // добавленная переменная
    int *ptr_a = &a[0][0];
    int *ptr_b = &b[0][0];

    int x;
    for (int i = 0; i < ROWS * COLS && scanf("%d", &x) == 1; ++i)
        *ptr_a++ = x;
    for (int i = 0; i < ROWS * COLS && scanf("%d", &x) == 1; ++i)
        *ptr_b++ = x;

    // здесь продолжайте программу
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            res[i][j] = a[i][j] + b[i][j];
            printf(j < COLS - 1 ? "%d " : "%d\n", res[i][j]);
        }
    }
    return 0;
}