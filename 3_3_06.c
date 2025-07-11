#include <stdio.h>
/* Напишите программу, которая считывает из входного потока три целых положительных 
числа (длины сторон треугольника), записанных в одну строчку через пробел. 
С помощью вложенных тернарных операций необходимо проверить, что эти числа
 могут описывать длины сторон треугольника. Выведите в консоль строку "yes", 
 если числа образуют длины сторон треугольника, и "no" в противном случае.

Критерий проверки: у любого треугольника длина каждой стороны всегда должна 
быть меньше суммы двух других.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.3.7

Sample Input:

3 4 5
Sample Output:

yes*/

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    a + b > c && a + c > b && b + c > a ? printf("yes") : printf("no");

    return 0;
}