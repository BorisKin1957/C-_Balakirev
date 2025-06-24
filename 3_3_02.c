#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);

    printf("%d", x <= 0 ? 0 : x);

    return 0;
}