#include <stdio.h>

int main(void)
{
    int k, m;
    if(scanf("%d, %d", &k, &m) != 2) {
        printf("Input error.");
        return 0;
    }

    printf("%d", k < m ? k * k : m * m);

    return 0;
}