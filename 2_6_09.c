#include <stdio.h>
/**/

int main(void)
//calculate the area of the trapezoid
{
    int a, b, h; //a, b, and h are three integers
    scanf("%d, %d, %d", &a, &b, &h);
    double area = (a + b) * h / 2.0; // trapezoid area

    printf("%.1f\n", area);

    return 0;
}
