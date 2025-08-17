/* Напишите программу, которая читает четыре целых числа из входного потока,
записанных в одну строчку через пробел. Объявите функцию с сигнатурой:

int sum_big2(int a, int b, int c, int d);
Эта функция должна складывать два наибольших числа из четырех переданных и
возвращать значение суммы. Вызовите функцию sum_big2 в функции main для
прочитанных чисел из входного потока. Выведите в консоль полученное значение
суммы в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.5.7

Sample Input:

8 11 -6 3
Sample Output:

19
 */

#include <stdio.h>
int sum_big2(int, int, int, int); // прототип функции

int main() {

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d); // считываем 4 числа

    printf("%d", sum_big2(a, b, c, d)); // вызываем функцию sum_big2

    return 0;
}
// функция для нахождения суммы двух наибольших чисел
int sum_big2(int a, int b, int c, int d) {
    int numbers[4] = {a, b, c, d}; // массив для 4 чисел

    for (size_t i = 0; i < 2; i++) // цикл для сортировки чисел по убыванию
        for (size_t j = i + 1; j < 4; j++) {
            if (numbers[j] > numbers[i]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    return numbers[0] + numbers[1]; // возвращаем сумму двух наибольших чисел
}