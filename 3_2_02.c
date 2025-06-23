#include <stdio.h>

int main(void)
{
    int m, n, result;
    if(scanf("%d, %d", &m, &n) != 2) {
        printf("Input error.");
        return 0;
    }

    if (!(m % n)) 
        printf("%d", m / n);
    else printf("division error");

    return 0;
}