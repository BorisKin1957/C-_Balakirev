/*Замените в приведенной программе цикл while на цикл for с сохранением логики работы программы.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.2.2

Sample Input:

10
Sample Output:

51
*/

#include <stdio.h>

int main(void) {
    int s = 0, n = 0;

    scanf("%d", &n);

    /*int i = 5;
       while(i++ <= n)
           s += i*/
           
    for (int i = 5; i++ <= n; s += i)
        ;

    printf("%d", s);

    return 0;
}