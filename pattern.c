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
        for(int p = n - i; p > 0; p--){
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i + count; j++)
            {
                printf("#");
            }
            count++;
        }
        else
        {
            for (int k = 1; k <= i + count; k++)
            {
                printf("-");
            }
            count++;
        }
        printf("\n");
    }
    count -= 2;
    for (int i = n - 1; i >= 1; i--)
    {
        for(int p = n - i; p > 0; p--){
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i + count; j++)
            {
                printf("#");
            }
            count--;
        }
        else
        {
            for (int k = 1; k <= i + count; k++)
            {
                printf("-");
            }
            count--;
        }
        printf("\n");
    }
    return 0;
}
