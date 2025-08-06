/* Напишите программу, которая читает строку, представленную в формате:

<имя студента>: <оценка 1>, <оценка 2>, ..., <оценка N>

Максимальная длина строки 255 символов. Все оценки представлены целыми числами.
Количество оценок может быть разным у разных студентов, но не более 20.

Необходимо вычислить среднее арифметическое оценок и полученное вещественное
число вывести в консоль с точностью до тысячных.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.6

Sample Input:

Балакирев: 2, 2, 2, 5, 5, 2, 2, 5
Sample Output:

3.125
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define POINTS 20  // максимальное количество оценок
#define LENGHT 255 // максимальная длина строки

int main(void) {

    int total = 0;       // сумма всех оценок
    int count = 0;       // количество оценок
    char buffer[LENGHT]; // буфер для считывания строки
    char *ptr = buffer;  // указатель на буфер

    fgets(buffer, 255, stdin);   // считываем строку
    size_t len = strlen(buffer); // длина строки
    // подсчет суммы оценок и их количества
    for (; (ptr = strchr(ptr, ' ')) != NULL && ptr - buffer < len &&
           count < POINTS;
         count++, ptr++)
        total += atoi(ptr);

    // вывод среднего арифметического
    printf("%.3f\n", (double)total / count);
    size_t len = strlen(buffer); // длина строки

    return 0;
}