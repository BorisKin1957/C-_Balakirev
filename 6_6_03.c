/* Продолжите программу. Объявите функцию с именем reverse, которая имеет два
параметра (порядок важен):

указатель на обрабатываемый массив типа short;
число обрабатываемых элементов массива.
Функция reverse должна "переворачивать" переданный массив, то есть, значения
должны идти в обратном порядке: от последнего к первому.

Вызовите функцию reverse в функции main для массива digs. Выведите в консоль
первые count значений массива digs в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.6.5

Sample Input:

4 7 -10 203 22 1 7 5
Sample Output:

5 7 1 22 203 -10 7 4
 */

#include <stdio.h>
#define MAX_SIZE 20

short reverse(short *arr, size_t size); // прототип функции
int main(void) {
    short digs[MAX_SIZE]; // массив
    int count = 0;        // количество элементов
    while (count < MAX_SIZE && scanf("%hd", &digs[count]) == 1)
        count++;

    // здесь продолжайте функцию main
    reverse(digs, count); // вызываем функцию

    for (int i = 0; i < count; i++) { // выводим массив
        printf("%hd ", digs[i]);
    }

    return 0;
}
// реализация функции реверса: идя в цикле от 0 до середины масива меняем
// местами элементы начальный и конечный
short reverse(short *arr, size_t size) {
    for (int i = 0; i < size / 2; i++) {
        short temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
}