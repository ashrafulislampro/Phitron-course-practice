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
    int isTrue = 1;
    if (N == M)
    {
        for (int i = 0; i < N && isTrue; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if ((i == j) || (i + j == N - 1))
                {
                    if ((arr[i][j] != 1))
                    {
                        isTrue = 0;
                        break;
                    }
                }
                else
                {
                    if ((arr[i][j] != 0))
                    {
                        isTrue = 0;
                        break;
                    };
                }
            }
        }
    }
    else
    {
        isTrue = 0;
    }
    printf("%s", isTrue ? "YES" : "NO");

    return 0;
}