/* Повторите программу из предыдущего 6-го подвига, только прерывание вложенного цикла 
выполните с помощью оператора break. (Прерывается только вложенный цикл, не внешний.) 
Оцените, как при этом изменится логика работы программы. */

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
            if (i + j >= LIMIT) {
                //n = 0; //Активация этой строки прерывает работу внешнего цикла
                break;
            } else
                result += i + j;

    printf("%d\n", result);

    return 0;
}