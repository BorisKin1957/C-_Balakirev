#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    double norm(int, int); // прототип функции
    double reley(double, double); // прототип функции

    double y = reley(norm(-2, 10), norm(-2, 10)); // вызов функции c параметрами
    printf("%.2lf", y);

    //__ASSERT_TESTS__
    return 0;
}
// реализация функции y = (x1 + x2) / 100, где x1, x2 - случайные числа из диапазона [a; b]
double norm(int a, int b) {
    if (a > b) { // проверка на корректность диапазона
        puts("Иррор");
        return 0;
    }
    size_t norm = 100; // константа
    double result = 0; // переменная для результата

    int num; // переменная для случайного числа
    int denom = b - a + 1; // диапазон

    srand(time(NULL));

    for (size_t i = 0; i < 100; i++) { // цикл из 100 итераций
        num = rand() % denom; // случайное число из диапазона [-2; 10]
        result += num; // сумма
    }

    return result / norm; // результат
}
// реализация функции y = sqrt(x1^2 + x2^2)
double reley(double x1, double x2){
    return sqrt(x1 * x1 + x2 * x2);
}