#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N, count1 = 0, count2 = 0;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if(arr[i] == 0) continue;        
        else if (arr[i] % 2 == 0)
        {
            count1++;
        }
        else if (arr[i] % 3 == 0)
        {
            count2++;
        }
    }

    printf("%d %d", count1, count2);

    return 0;
}
