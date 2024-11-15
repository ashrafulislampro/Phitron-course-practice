#include <stdio.h>
void pyramid(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printf("%d ", i);
    pyramid(i + 1, n);
    if (i != n)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" ");
        }
    }
};
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        pyramid(1, n);
        printf("\n");
    }
    return 0;
}