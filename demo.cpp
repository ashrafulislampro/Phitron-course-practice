#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));                                              // Seed the random number generator with the current time
    double randomValue = static_cast<double>(rand()) / RAND_MAX; // Generate a random double in [0, 1]
    int res = round(randomValue * 20);                           // Scale to [1, 20] and round
    cout << "Random Number = " << res << endl;

    return 0;
}
