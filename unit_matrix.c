#include <stdio.h>
#include <stdbool.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    bool isTrue = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                isTrue = false;
                break;
            }
            else if (i != j && arr[i][j] != 0)
            {
                isTrue = false;
                break;
            }
        }
        if (!isTrue)
        {
            break;
        }
    }
    printf("%s\n", isTrue ? "YES" : "NO");
    return 0;
}