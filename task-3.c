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

    for (int i = 0; i < N; i++)
    {
        int low_ind = 0, high_ind = M - 1;        
        int temp = arr[i][low_ind];
        arr[i][low_ind] = arr[i][high_ind];
        arr[i][high_ind] = temp;        
    }
    for(int i = 0, k = N-1; i<1; i++){
        for(int j = 0; j < M; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[k][j];
            arr[k][j] = temp;
        }
    }



    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d", arr[i][j]);
            if (j != M - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}