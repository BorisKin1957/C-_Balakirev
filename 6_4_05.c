/* Необходимо объявить функцию с именем transpose, которой передается двумерный
массив размером SIZE x SIZE из чисел типа short. Функция transpose должна строки
заменять на соответствующие столбцы (транспонирование) переданного массива. В
функции main вызовите функцию transpose для массива matrix. Выведите полученный
транспонированный массив matrix в консоль в виде таблицы целых чисел SIZE x SIZE
элементов.

(Обратите внимание, что между числами в строках должен быть один пробел, а в
конце строк - ни одного.)

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.4.6

Sample Input:

1 2 3 4
5 6 7 8
9 8 7 6
5 4 3 2

Sample Output:

1 5 9 5
2 6 8 4
3 7 7 3
4 8 6 2


*/

#include <stdio.h>

#define SIZE 4 // размер матрицы

// Объявление функции транспонирования
void transpose(short matrix[SIZE][SIZE]);

int main(void) {
    short matrix[SIZE][SIZE]; // инициализация матрицы
    short *ptr = &matrix[0][0]; // указатель на первый элемент
    int count = 0;

    // Чтение данных из stdin
    while (count < SIZE * SIZE && scanf("%hd", ptr) == 1) {
        ptr++; // перемещаем указатель
        count++; // увеличиваем счетчик
    }

    // Вызов функции транспонирования
    transpose(matrix);

    // Вывод результата в виде таблицы
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j != SIZE - 1)
                printf("%hd ", matrix[i][j]); // вывод с пробелом
            else
                printf("%hd", matrix[i][j]); // последний элемент без пробела
        }
        printf("\n"); // переход на новую строку
    }

    return 0;
}

// Функция транспонирования матрицы
void transpose(short matrix[SIZE][SIZE]) {
    short result[SIZE][SIZE]; // временная матрица для хранения результата

    // Транспонирование матрицы
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrix[j][i]; // перенос значений
        }
    }

    // Копирование результата обратно в исходную матрицу
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = result[i][j];
        }
    }
}
