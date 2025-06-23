 #include <stdio.h>

int main(void)
{
    short x, y, min;
    if(scanf("%hd, %hd", &x, &y) != 2) {
        printf("Input error.");
        return 0;
    }

    if(x < y) min = x; else min = y;
    printf("%hd\n", min);

    return 0;
}