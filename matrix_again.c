#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = N - 1; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d", arr[i][j]);
            if (j < M - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = M - 1; j < M; j++)
        {
            printf("%d", arr[i][j]);
        }
        if (i < N - 1)
        {
            printf(" ");
        }
    }

    return 0;
}