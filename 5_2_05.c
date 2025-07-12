/* В программе до функции main() объявлен массив с именем marks и типом
 * элементов short. Этот массив скрыт в коде, но он существует. В функции main()
 * вычислите среднее арифметическое значений элементов этого массива и выведите
 * в консоль полученное значение с точностью до сотых.
 */

#include <stdio.h>

int main(void) {
    short marks[5] = {5, 4, 3, 2, 1};
    // здесь продолжайте функцию main
    int sum = 0;
    short lenght = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < lenght; i++)
        sum += marks[i];

    printf("%.2lf", (double)sum / lenght);

    return 0;
}