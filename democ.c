#include <stdio.h>
void f2()
{
    printf("f1 ");
}
void f1(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", n);

    f1(n - 1);

    printf("%d ", n);
    // f2();
}
int main()
{
    printf("Main\n");
    f1(10);
    return 0;
}