#include <stdio.h>

int main(void)
{
    int w, h;
    scanf("%d; %d", &w, &h);
 
    printf("%s", w == h ? "square" : "rectangle");

    return 0;
}