/* Напишите программу, в которой объявляется перечисление с идентификатором
calc_types и константами:

_perimetr=1, _square=2

Объявите функцию с именем calc_rect, которая имеет следующие параметры (порядок
важен):

ширина прямоугольника width (тип double);
высота прямоугольника height (тип double);
тип вычислений type (тип calc_types).
Функция должна вычислять либо площадь прямоугольника (если types равен _square),
либо его периметр (если types равен _perimetr) и возвращать вычисленное значение
(тип double).

В функции main прочитайте из входного потока одно целое число (для type) и два
вещественных числа (width и height), записанных в одну строчку через пробел.
Вызовите функцию calc_rect с передачей ей прочитанных значений в качестве
аргументов. Выведите в консоль вычисленное значение с точностью до десятых.

Sample Input:

1 3.5 7.8
Sample Output:

22.6
 */

#include <stdio.h>

enum calc_types {_perimetr = 1, _square = 2 }; // перечисление
double calc_rect(double, double, enum calc_types); // прототип функции

int main(void) {

    int var; // переменная, которая принимает значения 1 или 2
    double width, height; // высота и ширина прямоугольника
    scanf("%d %lf %lf", &var, &width, &height); // считываем значения

    printf("%.1f", calc_rect(width, height, var)); // выводим результат функции

    return 0;
}

double calc_rect(double width, double height, enum calc_types type) {
    if (type == _perimetr) // проверяем значение переменной
        return 2 * (width + height); // если 1, то возвращаем периметр
    else if (type == _square) // если 2, то возвращаем площадь
        return width * height;
    else
        return 0;
}