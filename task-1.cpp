#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        double r = area / s;
        double r_squared = r * r;

        int numerator = round(r_squared * 1000);
        int denominator = 1000;

        int common_gcd = gcd(numerator, denominator);
        numerator /= common_gcd;
        denominator /= common_gcd;

        cout << numerator << "/" << denominator << endl;
    }

    return 0;
}
