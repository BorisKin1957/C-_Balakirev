/*  Продолжите программу. Необходимо из массива ar в обратном порядке (идя от
последнего записанного значения к первому) скопировать прочитанные данные в
массив marks (копирование выполнять от первого элемента к последнему), не выходя
за пределы массива marks. То есть, в случае достижения последнего элемента
массива marks, останавливать процедуру копирования. Вывести в консоль значения
массива marks (от первого до последнего скопированного элемента) в одну строчку
через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.1

Sample Input:

1 2 3 4 5 6 7 8 9 10 11 12 13
Sample Output:

10 9 8 7 6
 */

#include <stdio.h>

int main(void) {
    short ar[10], marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);

    while (count < sz_ar && scanf("%hd", &ar[count]) == 1)
        count++;

    size_t size_marks = sizeof(marks) / sizeof(*marks);

    if (count < size_marks)
        size_marks = count;

    for (size_t i = 0; i < size_marks; i++) {
        marks[i] = ar[count - i - 1];
        printf("%hd ", marks[i]);
    }

    return 0;
}