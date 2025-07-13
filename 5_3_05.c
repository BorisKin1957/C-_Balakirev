/* Продолжите программу. Прочитайте из входного потока целые числа в переменные
var_1, var_2 и var_3, записанные в одну строчку через запятую. Побайтно занесите
их значения в массив типа char (в порядке var_1, var_2, var_3). Выведите в одну
строчку через пробел по порядку значения массива в виде беззнаковых десятичных
чисел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.3.8

Sample Input:

7356, 6575729, 100433564
Sample Output:

188 28 113 86 100 0 156 126 252 5 0 0 0 0
 */

#include <stdio.h>

int main(void) {
    short var_1;
    int var_2;
    long long var_3;

    // здесь продолжайте программу
    unsigned char arr[sizeof(var_1) + sizeof(var_2) + sizeof(var_3)] = {0};
    char *ptr_arr = arr;
    char *ptr_1 = (char *)&var_1;
    char *ptr_2 = (char *)&var_2;
    char *ptr_3 = (char *)&var_3;

    scanf("%hi, %i, %lli", &var_1, &var_2, &var_3);

    // printf("%d\n", *ptr_1);
    // printf("%d\n", *(ptr_1 + 1));
    // printf("%d\n", *ptr_2);
    // printf("%d\n", *(ptr_2 + 1));
    // printf("%d\n", *(ptr_2 + 2));
    // printf("%d\n", *(ptr_2 + 3));
    // printf("%d\n", *ptr_3);
    for (int i = 0; i < sizeof(var_1); i++)
        *ptr_arr++ = *ptr_1++;
    for (int i = 0; i < sizeof(var_2); i++)
        *ptr_arr++ = *ptr_2++;
    for (int i = 0; i < sizeof(var_3); i++)
        *ptr_arr++ = *ptr_3++;
    for (int i = 0; i < sizeof(arr); i++)
        printf("%d ", arr[i]);
    return 0;
}