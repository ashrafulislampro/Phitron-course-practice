#include <stdio.h>

int main()
{
    int N, count = 0, increment = 0;
    scanf("%d", &N);

    for (int i = 3; i <= N; i += 2)
    {
        count++;
    }
    for (int i = 1; i <= 6 + count; i++)
    {

        for (int p = (6 + count - i); p > 0; p--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i + increment; j++)
        {
            printf("*");
        }
        increment++;
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int p = 5; p > 0; p--)
        {
            printf(" ");
        }
        for (int j = 1; j <= N; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}