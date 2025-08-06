/* Напишите программу, которая читает из входного потока три целых числа,
записанных в одну строчку через пробел, в переменные h, m, s. Здесь h - часы; m
- минуты; s - секунды. На основе этих значений сформировать строку в формате:

hh:mm:ss

Если значение переменных h, m, s выходит за допустимый диапазон (h: [0; 23], m:
[0; 59], s: [0; 59]), то вместо соответствующего значения прописать два символа
дефиса '--'. Выведите сформированную строку в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.2

Sample Input:

12 68 10
Sample Output:

12:--:10
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    int h, m, s;
    char hrono[10] = {0};
    char str_h[3] = {0}, str_m[3] = {0}, str_s[3] = {0};

    scanf("%d %d %d", &h, &m, &s);

    // Проверка диапазона для часов
    if (h < 0 || h > 23) {
        strcpy(str_h, "--");
    } else {
        if (h < 10) {
            sprintf(str_h, "0%d", h);
        } else {
            sprintf(str_h, "%d", h);
        }
    }

    // Проверка диапазона для минут
    if (m < 0 || m > 59) {
        strcpy(str_m, "--");
    } else {
        if (m < 10) {
            sprintf(str_m, "0%d", m);
        } else {
            sprintf(str_m, "%d", m);
        }
    }

    // Проверка диапазона для секунд
    if (s < 0 || s > 59) {
        strcpy(str_s, "--");
    } else {
        if (s < 10) {
            sprintf(str_s, "0%d", s);
        } else {
            sprintf(str_s, "%d", s);
        }
    }

    sprintf(hrono, "%2s:%2s:%2s", str_h, str_m, str_s);
    puts(hrono);

    return 0;
}