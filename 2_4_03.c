#include <stdio.h>

int main(void)
{
    unsigned height = 12345012;
    long long dist = 1234567890LL;
    long double weight = 45.7845;

    printf("%ld %lld %.4Lf\n", height, dist, weight);

    return 0;
}