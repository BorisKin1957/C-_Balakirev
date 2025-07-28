/* Напишите программу, которая в массив строк cities читает из входного потока
названия шести городов, записанных в одну строчку через пробел. Максимальная
длина названия города не превышает 50 символов. Из всех названий выбрать два
наибольших по длине и вывести в консоль в одну строчку через пробел в порядке их
следования.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.9.3

Sample Input:

Tver Moskwa Ulianovsk Barnaul Ufa Belgorod
Sample Output:

Ulianovsk Belgorod
 */
#include <stdio.h>
#include <string.h>

#define MAX 51
#define LEN 6

int main() {
    // Объявление массива для хранения городов (LEN строк по MAX символов)
    char cities[LEN][MAX] = {0};

    size_t max_len = 0, // Длина самого длинного города
        max_idx = 0, // Индекс самого длинного города
        second_idx = 0; // Индекс второго по длине города

    // чтение городов и поиск самого длинного
    for (size_t i = 0; i < LEN; i++) {
        if (scanf("%50s", cities[i]) != 1) {
            puts("Ошибка ввода");
            return 1;
        }
        size_t len = strlen(cities[i]);
        if (len > max_len) {
            max_len = len;
            max_idx = i;
        }
    }

    // Поиск второго по длине города
    size_t second_len = 0;
    for (size_t i = 0; i < LEN; i++) {
        if (i != max_idx && strlen(cities[i]) > second_len) {
            second_len = strlen(cities[i]);
            second_idx = i;
        }
    }

    // Вывод в порядке ввода
    if (max_idx < second_idx)
        printf("%s %s\n", cities[max_idx], cities[second_idx]);
    else
        printf("%s %s\n", cities[second_idx], cities[max_idx]);

    return 0;
}