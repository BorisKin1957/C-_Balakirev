/*  В программе объявлен до функции main() массив с именем pows и типом
элементов float. Этот массив скрыт в коде, но он существует. В функции main()
выведите в консоль в одну строчку через пробел значения его элементов в обратном
порядке с точностью до десятых.

Напишите программу. Тестируется через stdin → stdout
Верно решили 930 учащихся
Из всех попыток 25% верных
 Прекрасный ответ.
  */

#include <stdio.h>

int main(void) {
    // здесь продолжайте программу
    float pows[3] = {1, 2, 3};

    int lenght = sizeof(pows) / sizeof(pows[0]);

    for (int i = lenght - 1; i >= 0; i--)
        printf("%.1f ", pows[i]);

    return 0;
}