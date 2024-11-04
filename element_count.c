#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int freq[1001] = {0};
    // insert data into first array.
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        // below count is same at 16 - 20 line
        freq[arr[i]]++;
    }
    // count each element from the first array.
    // for (int i = 0; i < N; i++)
    // {
    //    freq[arr[i]]++;
    // }
    // print counted element from frequency array
    for (int i = 0; i < 1001; i++)
    {
        if (freq[i] > 0)
        {
            printf("%d = %d\n", i, freq[i]);
        }
    }
}