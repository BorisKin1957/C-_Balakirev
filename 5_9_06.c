/*  Продолжите программу, которая в массив строк ps (двумерный массив 7 x 50)
читает из входного потока фамилии семи сотрудников, записанных в одну строчку
через пробел. Считать, что максимальная длина фамилии не превышает 50 символов.
Сформировать еще одну строку ps_sort, в которую через пробел скопировать фамилии
сотрудников по возрастанию их длин. В конце последней фамилии пробела быть не
должно, сразу стоять символ '\0'. Вывести строку ps_sort в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.9.7

Sample Input:

Ivanov Petrova Sidorova Balakirev Bach Stras Lomonosova
Sample Output:

Bach Stras Ivanov Petrova Sidorova Balakirev Lomonosova
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    // Объявление массива для хранения 7 строк (максимум 50 символов + '\0')
    char ps[7][51] = {0}; // Исходный массив строк
    char ps_sort[7 * 51] = {0}; // Буфер для отсортированного результата
    size_t min_len = 0,
           min_ind = 0; // Переменные для поиска минимальной длины и индекса

    // Чтение 7 строк из входного потока
    for (size_t i = 0; i < 7; i++)
        scanf("%50s", ps[i]); // Ограничиваем ввод до 50 символов

    min_len =
        50; // Инициализация максимальной возможной длины строки (50 символов)

    // Цикл для сортировки строк по длине
    for (size_t k = 0; k < 7; k++) {
        // Поиск строки с минимальной длиной
        for (size_t i = 0; i < 7; i++) {
            if (strlen(ps[i]) < min_len) {
                min_len = strlen(ps[i]); // Обновление длины
                min_ind = i;             // Сохранение индекса
            }
        }

        // Добавление найденной строки в результат и пробела
        strcat(ps_sort, ps[min_ind]);
        strcat(ps_sort, " ");

        min_len = 50; // Сброс длины для следующей итерации
        // "Инвалидация" обработанной строки: заполнение её 'z'
        for (size_t j = 0; j < 50; j++) {
            ps[min_ind][j] = 'z';
        }
    }

    // Удаление последнего лишнего пробела
    ps_sort[strlen(ps_sort) - 1] = '\0';

    // Вывод отсортированных строк
    printf("%s\n", ps_sort);

    //__ASSERT_TESTS__

    return 0;
}

/* #include <stdio.h>
#include <string.h>


int main() {
    char ps[7][50 + 1] = {0};
    int used[7] = {0}; // Флаги для отслеживания использованных строк
    char ps_sort[(7 * (50 + 1))] = {0};

    // Чтение строк
    for (size_t i = 0; i < 7; i++) {
        scanf("%50s", ps[i]);
    }

    // Сортировка по длине
    for (size_t k = 0; k < 7; k++) {
        size_t min_len = 50 + 1;
        size_t min_index = 0;

        // Поиск строки с минимальной длиной, ещё не использованной
        for (size_t i = 0; i < 7; i++) {
            if (!used[i] && strlen(ps[i]) < min_len) {
                min_len = strlen(ps[i]);
                min_index = i;
            }
        }

        // Добавление в результат
        strcat(ps_sort, ps[min_index]);
        if (k < 7 - 1) {
            strcat(ps_sort, " ");
        }

        // Отметка строки как использованной
        used[min_index] = 1;
    }

    // Вывод результата
    printf("%s\n", ps_sort);
    return 0;
} */