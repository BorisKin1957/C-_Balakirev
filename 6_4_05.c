#include <stdio.h>

#define SIZE    4 // размер матрицы

int transpose(short matrix[SIZE][SIZE]);



int main(void)
{
    short matrix[SIZE][SIZE] = {0}; // инициализация матрицы нулями
    short* ptr = &matrix[0][0]; // указатель на первый элемент матрицы
    int count = 0;
    while(count < SIZE * SIZE && scanf("%hd", ptr) == 1) { // считываем значения
        ptr++; // перемещаем указатель на следующий элемент
        count++; // увеличиваем счетчик элементов
    }

    // здесь продолжайте программу

    transpose(matrix);  // Вызов функции транспонирования

    return 0;
}

int transpose(short matrix[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            printf("%hd ", matrix[j][i]);// Транспонирование: строки ↔ столбцы
        }
        printf("\n");
    }
    return 0;
}