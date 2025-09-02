/* Объявите в программе вариадическую функцию с именем v_norm2, в которой должны
быть определены следующие параметры (порядок важен):

указатель на строку (массив типа char);
вариадические параметры (тип double).
Функция v_norm2 должна вычислять норму вектора по следующему правилу:

если в первом параметре строка "vector2", то вектор имеет две координаты;
если в первом параметре строка "vector3", то вектор имеет три координаты;
если в первом параметре строка "vector4", то вектор имеет четыре координаты;
если в первом параметре иная строка, то норма не вычисляется и возвращается 0.0.
Квадратичная норма вектора вычисляется по формуле:

 x^2 + y^2 + ... + z^2

где x, y, ... - координаты вектора (передаются через вариадические параметры).

Функция v_norm2 должна возвращать вычисленную норму в виде вещественного числа
типа double.

В функции main вызовите функцию v_norm2 для вычисления квадратичной нормы
двумерного вектора с координатами 1.0 и 2.0. Выведите результат в консоль в виде
вещественного числа с точностью до десятых.
 */

// #include <math.h>   // для pow
// #include <stdarg.h> // для va_list
// #include <stdio.h>
// #include <string.h> // для strcmp

// double v_norm2(char *, ...);      // прототип функции
// double get_sqrt_vector(int, ...); // прототип функции

// int main(void) {
//     double num1 = 5.0, num2 = -7.2, num3 = 3.0,
//            num4 = 4.0;         // инициализация координат
//     char vector[] = "vector2"; // инициализация

//     // double result = v_norm2(vector, num1, num2, num3, num4); // вызов
//     функции
//     // для вектора 2
//     double result =
//         v_norm2("vector2", 1.0, 2.0); // вызов функции тупо по заданию

//     printf("%.1lf\n", result); // вывод результата
// }
// // реализация функции
// double v_norm2(char *word, ...) {
//     double numbers[4] = {0.0}; // массив для хранения 4-х возможных координат
//     if (*word == '\0') // проверка на пустую строку
//         return 0;
//     else {
//         va_list ap; // инициализация списка аргументов
//         va_start(ap, word); // начало списка аргументов

//         if (strcmp(word, "vector2") == 0) { // проверка на вектор 2
//             for (int i = 0; i < 2;
//                  i++) { // цикл для заполнения массива 2-ми значениями
//                 numbers[i] = va_arg(ap, double);
//             }
//             return get_sqrt_vector(2, numbers[0],
//                                    numbers[1]); // возвращаем квадрат вектора
//         }
//         if (strcmp(word, "vector3") == 0) { // проверка на вектор 3
//             for (int i = 0; i < 3; i++) {
//                 numbers[i] = va_arg(ap, double);
//             }
//             return get_sqrt_vector(3, numbers[0], numbers[1], numbers[2]);
//         }
//         if (strcmp(word, "vector4") == 0) { // проверка на вектор 4
//             for (int i = 0; i < 4; i++) {
//                 numbers[i] = va_arg(ap, double);
//             }
//             return get_sqrt_vector(4, numbers[0], numbers[1], numbers[2],
//                                    numbers[3]);
//         }
//         va_end(ap); // завершение списка аргументов
//     }
//     return 0;
// }

// double get_sqrt_vector(int n,
//                        ...) { // реализация функции: сумма квадратов n чисел
//     double sum = 0;
//     va_list ap; // инициализация списка аргументов
//     va_start(ap, n); // начало списка аргументов

//     for (size_t i = 0; i < n; i++) // цикл для суммирования квадратов
//         sum += pow(va_arg(ap, double), 2); // возводим в квадрат и суммируем

//     va_end(ap); // завершение списка аргументов
//     return sum; // возвращаем сумму квадратов
// }

#include <math.h>   // для pow
#include <stdarg.h> // для va_list
#include <stdio.h>
#include <string.h> // для strcmp

// Функция v_norm2 вычисляет квадратную норму вектора
double v_norm2(char *, ...);

int main(void) {
    // Вызов функции для двумерного вектора
    double result = v_norm2("vector2", 1.0, 2.0);

    // Вывод результата
    printf("%.1lf\n", result);
    return 0;
}

// Реализация функции v_norm2
double v_norm2(char *word, ...) {
    double sum = 0.0;
    va_list ap;
    va_start(ap, word);

    if (strcmp(word, "vector2") == 0) {
        double x = va_arg(ap, double);
        double y = va_arg(ap, double);
        sum = x * x + y * y;
    } else if (strcmp(word, "vector3") == 0) {
        double x = va_arg(ap, double);
        double y = va_arg(ap, double);
        double z = va_arg(ap, double);
        sum = x * x + y * y + z * z;
    } else if (strcmp(word, "vector4") == 0) {
        double x = va_arg(ap, double);
        double y = va_arg(ap, double);
        double z = va_arg(ap, double);
        double w = va_arg(ap, double);
        sum = x * x + y * y + z * z + w * w;
    }

    va_end(ap);
    return sum;
}