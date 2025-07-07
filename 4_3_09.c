/* Напишите программу, которая читает из входного потока натуральные числа m, n, k, 
записанные в одну строчку через пробел. Используя их, необходимо вычислить следующую сумму ряда:

S =
 
​Полученное вещественное значение (тип double) вывести в консоль с точностью до четырех 
знаков после запятой (десятитысячных).

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.3.10

Sample Input:

5 7 3
Sample Output:

2.9490

Верно решили 785 учащихся
Из всех попыток 40% 

 Отличное решение!
  */

#include <stdio.h>
int main(void) {
    int m, n, k;
    double result = 0;

    if (scanf("%d %d %d", &m, &n, &k) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            for (int t = 1; t <= k; t++)
                result += j * j / (double)((i + t) * (i + t) * (i + t) - t);

    result *= 1.0 / (n + m + k);

    printf("%.4lf\n", result);

    return 0;
}