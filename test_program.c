#include <stdio.h>

int main()
{
    int n, index, value, item;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    n = n + 1;
    scanf("%d%d", &index, &value);
    for (int i = n; i >= index + 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index + 1] = value;
    n = n + 1;
    scanf("%d", &item);
    arr[n] = item;
    printf("After the insertion operation\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    scanf("%d", &index);
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1;
    printf("\nAfter the delete operation\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}