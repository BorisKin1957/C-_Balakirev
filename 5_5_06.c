/* Из массива pows необходимо удалить все элементы кратные 3 (делятся нацело на
3). Если таких элементов нет, то ничего удалять не нужно. Выведите в консоль по
порядку в одну строчку через пробел полученные значения оставшихся элементов
массива pows.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.6

Sample Input:

1 2 3 4 5 6 7 8 9 10
Sample Output:

1 2 4 5 7 8 10
Напишите программу. Тестируется через stdin → stdout
Верно решили 853 учащихся
Из всех попыток 42% верных
 Отличное решение!
  */

#include <stdio.h>

#define TOTAL 20

int main(void) {
    short pows[TOTAL] = {0};
    size_t count = 0, i = 0, ind_ins;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while (count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    while (i < count) {
        // Ищем в массиве число кратное 3
        if (pows[i] % 3 == 0) {
            // Сдвигаем элементы справа налево
            ind_ins = i;
            while (ind_ins < count - 1) {
                pows[ind_ins] = pows[ind_ins + 1];
                ind_ins++;
            }
            // Укорачиваем массив и i из-за выбывшего элемента
            count--;
            i--;
        }
        i++;
    }

    for (size_t i = 0; i < count; i++)
        printf("%d ", pows[i]);

    return 0;
}