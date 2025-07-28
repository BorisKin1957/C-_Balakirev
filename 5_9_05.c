/* Продолжите программу, которая в массив строк ps (размерностью 7 x 50) читает
из входного потока фамилии семи сотрудников, записанных в одну строчку через
пробел. Считать, что максимальная длина фамилии не превышает 50 символов.
Сформировать еще одну строку ps_res, в которую через пробел скопировать фамилии
сотрудников (в порядке их считывания), которые имеют четную длину. В конце
последней фамилии пробела быть не должно, сразу стоять символ '\0'. Если фамилий
счетными длинами нет, то формируется пустая строка. Вывести строку ps_res в
консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.9.6

Sample Input:

Ivanov Petrov Sidorov Balakirev Starostin Nikitin Sergeev
Sample Output:

Ivanov Petrov
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    // здесь продолжайте программу
    char ps[7][51] = {0};
    char ps_res[7 * 51] = {0}, tmp[51] = {0};

    for (size_t i = 0; i < 7; i++)
        scanf("%50s", ps[i]);

    for (size_t i = 0; i < 7; i++) {
        if (strlen(ps[i]) % 2 == 0) {
            strcat(ps_res, ps[i]);
            strcat(ps_res, " ");
        }
    }
    ps_res[strlen(ps_res) - 1] = '\0';

    printf("%s\n", ps_res);

    //__ASSERT_TESTS__

    return 0;
}