/* Продолжите программу. Необходимо объявить рекурсивную функцию со следующей
сигнатурой:

size_t range_to_ar(int* ptr_a, size_t max_len, int from, int to, size_t count);


Эта функция должна последовательно заносить в переданный массив (через указатель
ptr_a) целые числа в диапазоне [from; to] (включая границы) с шагом 1, не
превышая длину массива max_len. Функция range_to_ar возвращает число count -
записанных в массив значений (не более max_len).

В функции main выведите в консоль в одну строчку через пробел первые cnt
значений массива ar.

P. S. В теле функции range_to_ar не использовать какие-либо операторы циклов.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.7.3

Sample Input:

8
Sample Output:

1 2 3 4 5 6 7 8
 */

#include <stdio.h>
#define MAX_LENGTH 20

size_t range_to_ar(int *, size_t, int, int, size_t); // прототип функции

int main(void) {
    int max_rec;        // максимальное число
    int ar[MAX_LENGTH]; // массив целых чисел
    scanf("%d", &max_rec); // считываем максимальное число

    size_t cnt = range_to_ar(ar, MAX_LENGTH, 1, max_rec,
                             0); // заполняем массив вызовом функции

    for (size_t i = 0; i < cnt; i++) // выводим массив
        printf("%d ", ar[i]);

    // здесь продолжайте программу

    return 0;
}
// функция, которая заполняет массив целыми числами в диапазоне от from до to c
// шагом 1
size_t range_to_ar(int *ptr_a, size_t max_len, int from, int to, size_t count) {
    if (count < to && count < max_len) { // проверка на выход за пределы массива
        *ptr_a = from; // заполняем массив ar через указатель
        // рекурсивный вызов c измененными значениями параметров
        return range_to_ar(ptr_a + 1, max_len, from + 1, to, count + 1);
    }

    return count; // возвращаем количество заполненных элементов
}