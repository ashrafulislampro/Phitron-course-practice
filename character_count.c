#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str[10001];
    scanf("%s", str);
    int arr[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        int ch = str[i] - 'a';
        arr[ch]++;
    }
    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';

        if (arr[i] > 0)
        {
            printf("%c - %d\n", ch, arr[i]);
        }
    }

    return 0;
}
