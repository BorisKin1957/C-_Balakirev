/* Из массива pows необходимо удалить элемент с первым найденным четным
значением. Если такой элемент не был найден, то, соответственно, ничего удалять
не нужно. Выведите в консоль по порядку в одну строчку через пробел полученные
значения оставшихся элементов массива pows.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.5

Sample Input:

1 3 5 7 8 4 3 2 1
Sample Output:

1 3 5 7 4 3 2 1

Верно решили 874 учащихся
Из всех попыток 47% верных
 Прекрасный ответ.
  */

#include <stdio.h>

#define TOTAL 20

int main(void) {
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while (count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    for (size_t i = 0; i < count; i++)
        // Ищем в массиве четное число
        if (pows[i] % 2 == 0) {
            // Сдвигаем элементы справа налево
            while (i < TOTAL - 1) {
                pows[i] = pows[i + 1];
                i++;
            }
            // Укорачиваем массив из-за выбывшего элемента
            count--;
        }

    for (size_t i = 0; i < count; i++)
        printf("%d ", pows[i]);

    return 0;
}
