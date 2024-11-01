#include <stdio.h>
#define MAX_VALUE 100000
int main()
{
    int N;
    scanf("%d", &N);

    int freq[MAX_VALUE + 1] = {0};

    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        freq[x]++;
    }
    int count = 0;
    for (int i = 1; i <= MAX_VALUE; i++)
    {
        if (freq[i] == i)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}