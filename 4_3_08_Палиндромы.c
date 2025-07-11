/* Напишите программу, которая читает из входного потока два натуральных 
числа m, n (m < n), записанных в одну строчку через пробел. Необходимо вывести 
в консоль в одну строчку через пробел все найденные числа-палиндромы в диапазоне [m; n]. 
Число-палиндром - это число, которое не меняет своего значения при чтении слева-направо 
и справа-налево. Например, числа 121, 1, 11, 43034 - палиндромы.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.3.9

Sample Input:

100 200
Sample Output:

101 111 121 131 141 151 161 171 181 191

Верно решили 837 учащихся
Из всех попыток 52% верных

 Отлично!
  */

#include <stdio.h>
int main(void) {
    int m, n;
    if (scanf("%d %d", &m, &n) != 2 || m > n) {
        printf("Invalid input\n");
        return 1;
    }

    do {
        // Переворачивание числа m
        int reversed = 0;
        for (int i = m; i > 0; i /= 10)
            reversed = reversed * 10 + i % 10;
        if (reversed == m)
            printf("%d ", m);
        m++;
    } while (m <= n);

    return 0;
}