#include <stdio.h>
#include <stdbool.h>
/* На плоскости размером rect_width x rect_height (ширина x высота) размещены 
непересекающиеся прямоугольники одинаковых размеров w x h, следующих друг за другом, 
как показано на рисунке ниже.

Необходимо продолжить программу, вычислив общее число прямоугольников не умещающихся 
целиком на плоскости. Результат вывести в консоль в виде одного целого числа.

P.S. Программу реализовать без применения условных операторов, только используя 
изученный материал.*/

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    /*
    printf("Остаток w: %d\n", rect_width % w != 0);
    printf("Число h: %d\n", rect_height / h);
    printf("Остаток h: %d\n", rect_height % h != 0);
    printf("Число w: %d\n", rect_width / w);
    printf("ADD: %d\n", (rect_height % h != 0) && (rect_width % w != 0));
    */

    int res = (rect_width % w != 0) * rect_height / h + 
                (rect_height % h != 0) * rect_width / w + 
                ((rect_height % h != 0) && (rect_width % w != 0));

    printf("%d\n", res);

    return 0;
}