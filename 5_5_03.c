/* Необходимо после первого найденного элемента со значением 5 массива digs
вставить новое значение -5. Обратите внимание, что при вставке нового значения,
последний элемент массива digs может теряться (если длина массива не позволяет
хранить все значения). Также следует учитывать, что элемент со значением 5 может
отсутствовать в массиве digs (тогда ничего вставлять не нужно). Выведите в
консоль по порядку значения всех прочитанных + добавленных элементов массива
digs в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.3

Sample Input:

1 2 3 4 5 5 6 7
Sample Output:

1 2 3 4 5 -5 5 6 7
 */

#include <stdio.h>

#define TOTAL 10 // количество элементов массива
#define OLD 5 // значение элемента, после которого нужно вставить новый элемент
#define NEW -5 // значение нового элемента

int main(void) {
    int digs[TOTAL] = {0};
    size_t count = 0, ind_ins;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while (count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    for (size_t i = 0; i < count; i++)
        // Ищем в массиве элемент OLD
        if (digs[i] == OLD) {
            ind_ins = i + 1;
            // Сдвигаем элементы справа от OLD на 1 вправо
            for (size_t j = count; j > ind_ins; j--)
                digs[j] = digs[j - 1];
            // Вставляем новый элемент NEW в позицию (OLD + 1)
            digs[ind_ins] = NEW;
            // Увеличиваем длину масива при нужде и сваливаем из цикла
            if (count < TOTAL)
                count++;
            break;
        }

    for (size_t i = 0; i < count; i++)
        printf("%d ", digs[i]);

    return 0;
}