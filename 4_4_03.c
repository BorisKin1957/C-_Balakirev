/* Написать программу, которая читает из входного потока натуральное число n. 
Вывести в консоль в одну строчку через пробел все целые числа, начиная с 1, 
квадраты которых меньше числа n. Прерывание цикла реализовать с помощью оператора break.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.4.4

Sample Input:

5
Sample Output:

1 2
 */

#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);
    for (int i = 1;; i++) {
        if (i * i >= n)
            break;
        printf("%d ", i);
    }
    return 0;
}