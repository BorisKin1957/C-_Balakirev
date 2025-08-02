/* С каждой новой строки вводятся названия городов. Напишите программу, которая
читает эти строки, кроме пустых (пустая строка должна быть проигнорирована).
Программа должна завершаться после чтения максимум 10 городов. Максимальная
длина названия каждого города не превышает 50 символов. Сформировать строку, в
которой названия городов идут по порядку (считывания) через пробел, кроме тех,
что содержат фрагмент "на". Вывести сформированную строку в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.6

Sample Input:

Барнаул
Кишинев
Ярославль
Николаев

Уфа
Москва
Санкт-Петербург

Самара
Воронеж


Смоленск
Sample Output:

Кишинев Ярославль Николаев Уфа Москва Санкт-Петербург Самара Воронеж Смоленск
 */

#include <stdio.h>
#include <string.h>

#define MAX_CITIES 10
#define MAX_NAME_LENGTH 50
#define BAD_STRING "на"

int main() {
    char cities[MAX_CITIES * (MAX_NAME_LENGTH + 1)];
    int city_count = 0;
    char buffer[MAX_NAME_LENGTH + 1];

    // Чтение до конца ввода (EOF)
    while (fgets(buffer, MAX_NAME_LENGTH, stdin) != NULL &&
           city_count < MAX_CITIES) {
        // Удаляем символ новой строки
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
            len--;
        }

        // Формируем результирующую строку, пропуская пустые строки
        // и города с фрагментом BAD_STRING
        if (len > 0) {
            if (strstr(buffer, BAD_STRING) == NULL) {
                strcat(cities, buffer);
                if (city_count < MAX_CITIES - 1)
                    strcat(cities, " ");
            }
            city_count++;
        }
    }

    // Вывод результата
    puts(cities);

    return 0;
}