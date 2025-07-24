/* Напишите программу, которая читает из входного потока в массив data названия
шести городов, записанных в одну строчку через пробел. Считать, что максимальная
длина названия города не превышает 20 символов. Вывести в консоль прочитанные
города в обратном порядке в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.8.4

Sample Input:

Kazan Ufa Vladivostok Tver Moskva Samara

Sample Output:

Samara Moskva Tver Vladivostok Ufa Kazan


*/

#include <stdio.h> // Подключение библиотеки для ввода/вывода
#define LINE 6 // Константа: количество строк для чтения
#define COLUMN 21 // Константа: количество символов в строке

int main(void) {
    // Объявление массива
    char data[LINE][COLUMN] = {0};

    // Цикл для чтения LINE строк
    for (int i = 0; i < LINE; i++)
        scanf("%20s", data[i]); // Чтение одной строки

    // Цикл для вывода данных
    for (int i = LINE - 1; i >= 0; i--)
        printf("%s ", data[i]);

    return 0;
}