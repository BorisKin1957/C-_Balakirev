
/* Продолжите программу, которая читает из входного потока строку целиком с
помощью функции fgets(). На выходе формируется корректная Си строка. Удалите из
прочитанной строки все латинские символы 'e' и выведите в консоль полученную
строку.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.8.6

Sample Input:

c_lokalnye-i-globalnye-peremennye

Sample Output:

c_lokalny-i-globalny-prmnny

Напишите программу. Тестируется через stdin → stdout
Верно решили 879 учащихся
Из всех попыток 43% верных
Абсолютно точно.
 */
#include <stdio.h>

void strip_string(char *str, int max_len) {
    int count = 0;
    while (*str++ != '\0' && count++ < max_len)
        ;

    if (count > 1) {
        str -= 2;
        if (*str == '\n')
            *str = '\0';
    }
}

int main(void) {
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));

    // здесь продолжайте программу
    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] != 'e')
            printf("%c", str[i]);

    return 0;
}