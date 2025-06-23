#include <stdio.h>

int main(void)
{
    char byte = 65;
    unsigned short height = 1055;
    int distance = 1000000;
    float pi = 3.1415f;

    printf("%c\n%hd\n%d\n%f\n", byte, height, distance, pi);

    return 0;
}