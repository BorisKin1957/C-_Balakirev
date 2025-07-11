/* Допишите следующую программу. Необходимо все 8 байт (тип double) переменной 
value вывести в консоль в виде десятичных чисел, записанных в одну строчку через 
пробел, начиная с первого байта.

Sample Input:

0.5
Sample Output:

0 0 0 0 0 0 -32 63

Верно решили 868 учащихся
Из всех попыток 51% верных
 Прекрасный ответ.
  */

#include <stdio.h>

int main(void) {
    double value;

    scanf("%lf", &value);

    // здесь продолжайте программу
    char *ptr = (char *)&value;

    for(int i = 0; i < sizeof(value); i++){
        printf("%d ", *ptr++);
    }

    return 0;
}