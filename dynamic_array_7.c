#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int *arr = (int *)malloc(1 * sizeof(int));
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &arr[i - 1]);
        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
    }
    for (int j = 0; j < N; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}