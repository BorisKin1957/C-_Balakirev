/*  Необходимо в массиве buffer поменять местами первую половину прочитанных
данных со второй половиной. Обратите внимание, что число прочитанных данных
определяется переменной count. Причем, если count четное, то первая половина
меняется со второй целиком, а если count нечетное, то центральный элемент должен
оставаться на своем месте без изменений. Выведите в консоль в одну строчку через
пробел первые count элементов полученного массива buffer.

P. S. Дополнительных массивов в программе не создавать.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.2

Sample Input:

6 70 8 9 10 1 20 3 4 5 11
Sample Output:

20 3 4 5 11 1 6 70 8 9 10
 */

#include <stdio.h>

#define SIZE_BUFFER 128

int main(void) {
    int buffer[SIZE_BUFFER], tmp;
    size_t count = 0, i = 0, half;
    size_t sz_ar = sizeof(buffer) / sizeof(*buffer);

    while (count < sz_ar && scanf("%d", &buffer[count]) == 1)
        count++;

    // здесь продолжайте программу
    half = count / 2;

    if (count % 2 != 0)
        half += 1;

    while (i < count / 2) {
        tmp = buffer[i + half];
        buffer[i + half] = buffer[i];
        buffer[i] = tmp;
        i++;
    }
    for (int j = 0; j < count; j++)
        printf("%d ", buffer[j]);

    return 0;
}