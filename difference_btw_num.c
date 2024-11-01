#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    int *ptr1 = &A;
    int *ptr2 = &B;

    printf("%d", abs(*ptr1 - *ptr2));
    return 0;
}