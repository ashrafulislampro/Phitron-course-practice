#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101], str2[101], str3[101];
    scanf("%s%s%s", str1, str2, str3);
    int len = strlen(str1), minOperation = 0;

    for (int i = 0; i < len; i++)
    {
        char ch1 = str1[i];
        char ch2 = str2[i];
        char ch3 = str3[i];

        if (ch1 == ch2 && ch1 == ch3)
        {
            minOperation += 0;
            continue;
        }
        if (ch1 == ch2 || ch1 == ch3 || ch2 == ch3)
        {
            minOperation += 1;
        }
        else
        {
            minOperation += 2;
        }
    }

    printf("%d", minOperation);
    return 0;
}