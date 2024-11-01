#include <stdio.h>

int main()
{
    char str[20];
    int num = 0, n;
    scanf("%s%d", str, &n);
    for (int i = 0; i < n; i++)
    {
        int n = str[i] - '0';
        num = num * 10 + n;
    }
    printf("%d", num);
    return 0;
}