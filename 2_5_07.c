#include <stdio.h>
/**/

int main(void)
{
    int a = 0; int b = 0;

    scanf("%d %d", &a, &b);
    int c = a; a = b; b = c;

    printf("%d %d", a, b);

    return 0;
}