/* Продолжите программу. Объявите функцию с именем show_pole, которой передается
двумерный массив типа char размером SIZE x SIZE элементов. Она должна отобразить
в консоли этот двумерный массив в виде таблицы размером SIZE x SIZE по следующей
схеме:
* * *
* * *
* * *
То есть, в три строки и три столбца. Причем, между символами в строках должен
быть один пробел. В конце строк пробела быть не должно.

Вместо символа '*'' необходимо вывести символ, который хранится в элементах
переданного массива:

символ 'x', если элемент массива равен числу 1;
символ 'o', если элемент массива равен числу 2;
символ '#', если значение элемента равно числу 0.
В функции main вызывать функцию show_pole для массива pole.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.4.7

Sample Input:

0 1 0
2 0 2
1 0 0
Sample Output:

# x #
o # o
x # #
 */

#include <stdio.h>

#define SIZE 3

void show_pole(char pole[SIZE][SIZE]); // прототип функции

int main(void) {
    char pole[SIZE][SIZE] = {0};
    char *ptr_p = &pole[0][0];
    int count = 0;
    int val = 0;

    while (count < SIZE * SIZE && scanf("%d", &val) == 1) {
        *ptr_p = val;
        ptr_p++;
        count++;
    }

    // здесь продолжайте программу
    show_pole(pole);

    return 0;
}
void show_pole(char pole[SIZE][SIZE]) {
    char sym, tmp;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            tmp = pole[i][j];
            if (tmp == 0)
                sym = '#';
            if (tmp == 1)
                sym = 'x';
            if (tmp == 2)
                sym = 'o';

            if (j < SIZE - 1)
                printf("%c ", sym);
            else
                printf("%c\n", sym);
        }
    }
}