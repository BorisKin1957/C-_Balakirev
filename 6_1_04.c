#include <stdio.h>

int  get_volume(int h, int w, int d) {
    if (h > 0 && w > 0 && d > 0) {
        return h * w * d;
    } else {
        puts("Ошибка функции вычисления объёма! Отрицательное значение!");
        return -1;
    }
}


int main(void) {
    int height, width, depth;
    if (scanf("%d %d %d", &height, &width, &depth) != 3) {
        printf("Ошибочные данные\n");
        return 1;
    }

    printf("%d", get_volume(height, width, depth));

    return 0;
}