/* Продолжите программу. Прочитайте из входного потока целое число в переменную
value типа int. Объявите массив с именем ar_d типа char и длиной для побайтного
хранения числа типа int. Скопируйте значение каждого байта переменной value в
массив ar_d (значение самой переменной value не менять). Выведите значения
элементов массива ar_d в консоль в виде десятичных чисел в одну строчку через
пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.3.5

Sample Input:

1025
Sample Output:

1 4 0 0
 */

#include <stdio.h>

int main(void) {
    // здесь продолжайте программу
    int value;
    scanf("%d", &value);

    char *ptr = (char *)&value;
    char ar_d[sizeof(value)];

    for (int i = 0; i < sizeof(value); i++) {
        ar_d[i] = *ptr++;
        printf("%hd ", ar_d[i]);
    }

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и
    // должно идти непосредственно перед return 0)
    return 0;
}