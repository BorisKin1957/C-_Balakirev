/*  Продолжите программу. Объявите функцию с именем is_win, которой передается
двумерный массив типа char размером SIZE x SIZE элементов. Функция is_win должна
проверять и возвращать статус переданного игрового поля игры "Крестики-нолики" в
виде целого числа:

0 - игра не окончена;
1 - выиграли "крестики";
2 - выиграли "нолики";
3 - ничья.

Каждый элемент переданного двумерного массива хранит либо символ 'x', либо
символ 'o', либо целое число 0, если клетка свободна.

В функции main вызовите функцию is_win для массива pole. Выведите в консоль
вычисленный статус игрового поля в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.4.8

Sample Input:

1 0 0
0 1 2
2 0 1
Sample Output:

1
 */

#include <stdio.h>

#define SIZE 3

int is_win(char pole[SIZE][SIZE]); // прототип функции
int get_count_sym(char pole[SIZE][SIZE], char sym); // прототип функции

int main(void) {
    char pole[SIZE][SIZE] = {0}; // инициализация массива
    char *ptr_p = &pole[0][0]; // указатель на первый элемент массива
    int count = 0; // счетчик элементов массива
    while (count < SIZE * SIZE && scanf("%d", ptr_p) == 1) {
        *ptr_p = (*ptr_p == 1) ? 'x' : (*ptr_p == 2) ? 'o' : *ptr_p;
        ptr_p++;
        count++;
    }

    // здесь продолжайте программу
    // if (is_win(pole) == 1)
    //     puts("Выиграли \"крестики\"\n");
    // if (is_win(pole) == 2)
    //     puts("Выиграли \"нолики\"\n");
    // if (is_win(pole) == 3)
    //     puts("Ничья\n");
    // if (is_win(pole) == 0)
    //     puts("Игра не окончена\n");
    printf("%d", is_win(pole)); // выводим итог игры

    return 0;
}
// функция is_win, которая проверяет статус игрового поля
int is_win(char pole[SIZE][SIZE]) {
    if (get_count_sym(pole, 'x') == 1) // проверка на победу крестиков
        return 1;
    size_t result = get_count_sym(pole, 'o');
    if (result == 1) // проверка на победу ноликов
        return 2;
    if (result == 2) // проверка на ничью
        return 3;
    if (result == 0) // проверка на не оконченную игру
        return 0;
}
// функция get_count_sym, которая считает количество символов sym в строках и
// диагоналях
int get_count_sym(char pole[SIZE][SIZE], char sym) {
    size_t nul = 0; // счетчик нулей
    // два цикла k для проверки строк, столбцов и диагоналей
    for (size_t k = 0; k < 2; k++) {
        nul = 0;          // обнуляем счетчик нулей
        size_t count = 0; // счетчик символов
        // проверка строк
        for (size_t i = 0; i < SIZE; i++) {
            count = 0; // обнуляем счетчик
            for (size_t j = 0; j < SIZE; j++) {
                if (pole[i][j] == sym) {
                    count++;
                    if (count == 3)
                        return 1;
                } else if (pole[i][j] == 0)
                    nul++;
            }
        }
        count = 0;
        // проверка главной диагонали
        for (size_t i = 0; i < SIZE; i++) //
            if (pole[i][i] == sym) // если символ совпадает с sym
                count++;           // увеличиваем счетчик
        if (count == 3)            // если счетчик равен 3
            return 1;              // возвращаем 1
        // цикл переворота матрицы
        for (int i = 0; i < SIZE; i++)
            for (int j = i + 1; j < SIZE; j++) {
                int temp = pole[i][j];
                pole[i][j] = pole[j][i];
                pole[j][i] = temp;
            }
    }
    // если победитель не найден
    if (sym == 'o') {
        if (nul == 0) // если нулей нет то это ничья
            return 2;
        else // иначе игра не окончена
            return 0;
    }
}