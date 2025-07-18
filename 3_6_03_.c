#include <stdio.h>
#include <stdlib.h>

/**
 * @file main.c
 * @brief Программа генерирует десять псевдослучайных чисел в диапазоне [a, b] и выводит их на экран.
 *
 * Использует формулу: y = rnd % (b − a + 1) + a, где rnd — случайное число из [0; RAND_MAX].
 * Обеспечивает корректную работу даже при отрицательных значениях a и b.
 *
 * @author [Ваше имя]
 * @date [Дата]
 */

/**
 * @brief Основная функция программы.
 *
 * Считывает границы диапазона a и b, генерирует 10 случайных чисел в этом диапазоне
 * и выводит их через пробел.
 *
 * @return Возвращает 0 при успешном завершении.
 */
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    // Вычисляем разницу один раз для оптимизации
    int denom = b - a + 1;

    // Массив для хранения сгенерированных чисел
    int nums[10];

    // Генерация 10 случайных чисел
    for (int i = 0; i < 10; i++) {
        nums[i] = rand() % denom + a;
    }

    // Вывод чисел через пробел
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}