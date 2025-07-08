/* Напишите программу, которая читает из входного потока два натуральных числа n, m, 
записанных в одну строчку через пробел, и вычисляет следующую сумму:



Сумма должна вычисляться до тех пор, пока слагаемое i+j меньше 10. Как только i+j 
окажется равно или больше 10, прервать подсчет суммы с помощью оператора goto и 
вывести результат (полученную сумму) в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.4.6

Sample Input:

4 10
Sample Output:

45

Верно решили 848 учащихся
Из всех попыток 50% верных
 Прекрасный ответ.
  */

#include <stdio.h>
#define LIMIT 10

int main(void) {
    int n, m, result = 0;

    if (scanf("%d %d", &n, &m) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            if (i + j >= LIMIT)
                goto exit;
            else
                result += i + j;

exit:
    printf("%d\n", result);

    return 0;
}