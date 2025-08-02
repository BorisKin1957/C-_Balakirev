/* Продолжите программу. В строке str необходимо найти последний символ '\n' и
если он найден, то заменить на символ '\0'. Вывести в консоль полученную строку
str в квадратных скобках.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.2

Sample Input:

Языки Си. Строки
Sample Output:

[Языки Си. Строки]
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);

    // здесь продолжайте программу
    
    // Ищем справа налево символ '\n'
    char *ptr = strrchr(str, '\n');
    // Если нашли
    if (ptr != NULL)
        // Заменяем на '\0'
        *ptr = '\0';

    printf("[%s]\n", str);

    return 0;
}