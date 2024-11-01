#include <stdio.h>

int main()
{
    int N, M, X;
    scanf("%d%d%d", &N, &M, &X);
    int arr[N][M];
    int arr2[X];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < X; i++)
    {
        // int val;
        scanf("%d", &arr2[i]);
        // arr2[val] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int res = arr[i][j];
            if (arr[i]);
        }
    }

    int len = sizeof(arr2) / sizeof(arr2[0]);
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}