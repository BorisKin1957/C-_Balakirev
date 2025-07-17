/*  Выполните сортировку массива ws по возрастанию (неубыванию), используя метод
сортировки выбором. Сортировать нужно только первые count элементов. Выведите в
консоль значения отсортированного массива ws (первые count элементов) в одну
строчку через пробел с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.7

Sample Input:

0.4 6.7 1.2 -5.8 3.3 21.0 4.35
Sample Output:

-5.80 0.40 1.20 3.30 4.35 6.70 21.00
 */

#include <stdio.h>

#define TOTAL 20

int main(void) {
    float ws[TOTAL] = {0.0f}, min;
    size_t count = 0, i = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while (count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;

    // здесь продолжайте программу

    while (i < count) {
        min = ws[i];
        for (size_t j = i; j < count; j++) {
            if (ws[j] < min) {
                min = ws[j];
                ws[j] = ws[i];
                ws[i] = min;
            }
        }
        i++;
    }
    for (size_t i = 0; i < count; i++) {
        printf("%.2f ", ws[i]);
    }
    return 0;
}