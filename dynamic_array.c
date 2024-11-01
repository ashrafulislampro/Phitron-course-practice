#include <stdio.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    printf("\n");
    arr = (int *)realloc(arr, 10 * sizeof(int));
    for (int i = 5; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    free(arr);

    int x = 10, y = 20, z = 30;
    int *pp, *qq;
    pp = &x;
    qq = &y;
    *pp = 40;
    x = 50;
    qq = pp;
    printf("%d ", *qq);
    // printf("%d %d", ptr, &ax);
    // for (int i = 0; i < 4; i++)
    // {

    // }
    return 0;
}