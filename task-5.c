#include <stdio.h>

int main()
{
    int t, A, B, C;
    long long M, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld%d%d%d", &M, &A, &B, &C);
        long long mul = (long long)A * B * C;
        d = M / mul;
        if (M == mul * d)
        {
            printf("%lld\n", d);
        }
        else
        {
            printf("%d\n", -1);
        };
    }
    return 0;
}