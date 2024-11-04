#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int getSum(int x, int n)
{
    if (x == n)
    {
        return 0;
    }
    return arr[x] + getSum(x + 1, n);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = getSum(0, n);
    cout << res << endl;
    return 0;
}