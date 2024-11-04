#include <bits/stdc++.h>
using namespace std;
void func(int x, int n);
void func1()
{
    cout << "inside function" << endl;
    func(1, 6);
}
void func(int x, int n)
{
    if (x > n)
    {

        return;
    }
    // printf("%d\n", x);
    printf("Before function call, Current x = %d\n", x);
    // func(x + 1, n);
    func1();
    printf("After function call, Current X = %d\n", x);
}
int main()
{
    cout << "Before function call in main\n";
    func(1, 6);
    cout << "After function call in main\n";
    return 0;
}