/* Перепишите следующую программу с использованием цикла do-while, сохранив логику работы программы.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.3.2

Sample Input:

5
Sample Output:

120
t
Верно решили 884 учащихся
Из всех попыток 43% верных
 Отлично!
  */

#include <stdio.h>

int main(void) {
    int p = 1, n;
    scanf("%d", &n);

    /* for (int i = 2; i <= n; ++i)
        p *= i; */

    do {
        if (n == 0)
            break;
        p *= n;
        n--;
    } while (n >= 2);

    printf("%d", p);

    return 0;
}