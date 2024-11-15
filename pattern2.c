#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int p = n - i; p > 0; p--)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
