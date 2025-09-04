

#include <stdio.h>

int get_true(int); // прототип функции
double mean_ar(const int *, size_t, int (*)(int)); // прототип функции

int main(void) {
    int marks[20] = {0};    // массив для 20 чисел
    int x, i = 0, count = 0; // переменная для считывания чисел, счётчик, количество элементов
    while (scanf("%d", &x) == 1) {
        // здесь продолжайте программу
        marks[i++] = x; // считываем числа и сохраняем в массив
        count++;    // увеличиваем счётчик
    }
//  вызываем функцию mean_ar для массива marks 
    printf("%.1lf", mean_ar(marks, count, get_true)); 

    return 0;
}
 // функция для проверки попадания числа в диапазон
int get_true(int x) {
    if (x >= 1 && x <= 5)
        return 1;
    return 0;
}

 // функция для подсчёта среднего значения
double mean_ar(const int *ar, size_t len_ar, int (*func)(int)) { 
    double sum = 0; // переменная для суммы
    size_t count = 0; // переменная для количества элементов
    for (size_t i = 0; i < len_ar; i++) // цикл по массиву
        if (func(ar[i])) { // проверка условия через переданную функцию
            sum += ar[i]; // если элемент удовлетворяет условию, то его добавляем
            count++; // увеличиваем количество элементов
        }
    return sum / count; // возвращаем среднее значение
}