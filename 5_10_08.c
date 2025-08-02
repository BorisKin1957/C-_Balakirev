/* Продолжите программу. В переменной str содержится E-mail адрес. Необходимо
проверить его корректность. Для этого в str должен присутствовать один символ
'@' (не первый), а после него (не сразу) - символ '.' (не последний). Также в
самом E-mail адресе допустимы только символы: a-z, A-Z, 0-9, '.', '_', '-'. Если
строка str содержит корректный E-mail адрес, то в консоль вывести 1, иначе 0.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.9

Sample Input:

sc_lib@list.ru
Sample Output:

1
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте программу
    size_t flag = 0; // Флаг результата
    // строка good_symbols содержит только разрешенные символы
    const char *good_symbols =
        "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789._-@.";
    size_t len = strlen(str), i = 0; // Длина строки и счётчик
    char *ptr = str; // Указатель на начало строки
    // Цикл перебора символов строки
    while ((ptr = strpbrk(ptr, good_symbols)) != NULL) {
        i++;
        ptr++;
    }
    // Если количество итераций i по строке равно длине строки len,
    // то строка содержит только разрешенные символы
    if (i == len && len > 5) {
        // проверка на наличие '@' и '.'
        if (strstr(str, "@") != NULL && strstr(str, ".") != NULL) {
            // символ @ не должен быть первым, а '.' не должен быть последним
            if (str[0] != '@' && str[len - 1] != '.') {
                int a1 = strlen(strchr(str, '@')); // длина до '@' слева
                int a2 = strlen(strrchr(str, '@')); // длина до '@' справа
                int b = strlen(strrchr(str, '.')); // длина до '.' справа
                // Если длины до '@' слева и справа равны, то символ '@'
                // единственный
                if (a1 == a2) {
                    // сначала символ '@', а после него (не сразу) - символ '.'
                    if (a1 - b > 1)
                        flag = 1; // флаг = 1 (всё зашибись!)
                }
            }
        }
    }
    // выводим флаг
    printf("%d\n", flag);

    return 0;
}