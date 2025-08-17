/* Необходимо дописать функцию sort_string, которая бы выполняла сортировку
символов переданной строки str (только символов строки, а не всех символов
массива) по их возрастанию (неубыванию). Критерий возрастания (какой символ
считать большим, а какой меньшим) задается дополнительной функцией с сигнатурой:

int match_ab(const char a, const char b);
Данная функция должна возвращать 1, если a < b, и 0 в противном случае. И, кроме
того, все цифровые символы ('0', ..., '9') должны быть "меньше" любых других
символов. То есть, при сортировке сначала в строке будут идти цифровые символы
(по возрастанию), а затем все остальные (по возрастанию).

Вызовите функцию sort_string для строки str и с функцией сравнения match_ab.
Выведите полученную строку str в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.5.6

Sample Input:

Phone number: 7845037856221
Sample Output:

0122345567788  :Pbeehmnnoru
 */

#include <stdio.h>
#include <string.h>

// Прототипы функций
int match_ab(const char, const char); // Функция сравнения (прототип)
void sort_string(char *, size_t,
                 int (*)(const char,
                         const char)); // Функция сортировки (прототип)

// Функция сравнения: цифры всегда меньше других символов
int match_ab(const char a, const char b) {
    // Если символы - цифры, то смещаем их копии в начало таблицы ASCII
    // сами символы цифр не можем менять, они const char
    char a_ = a, b_ = b;

    if (a >= '0' && a <= '9')
        a_ -= 47;
    if (b >= '0' && b <= '9')
        b_ -= 47;

    return a_ < b_;
}

// Функция сортировки строки
void sort_string(char *str, size_t max_len,
                 int (*compare)(const char, const char)) {
    size_t len = strlen(str); // Длина строки
    for (size_t i = 0; i < len; i++) {
        size_t min_index = i; // Индекс минимального элемента
        for (size_t j = i + 1; j < len; j++) {
            // Если текущий элемент меньше найденного минимума
            if (compare(str[j], str[min_index])) {
                min_index = j; // Обновляем индекс минимума
            }
        }
        // Меняем местами текущий элемент и найденный минимум
        char temp = str[i];
        str[i] = str[min_index];
        str[min_index] = temp;
    }
}

int main(void) {
    char str[100] = {0};
    // Чтение строки из входного потока
    fgets(str, sizeof(str) - 1, stdin);
    // Удаление символа новой строки '\n'
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // Вызов функции сортировки
    sort_string(str, 100, match_ab);

    // Вывод отсортированной строки
    puts(str);

    return 0;
}