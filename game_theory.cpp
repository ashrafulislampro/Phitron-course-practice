#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        long long N;
        int P;
        cin >> N >> P;

        // Determine the winner based on N's parity and the starting player
        string winner;
        if (N % 2 == 1) {  // Odd N
            if (P == 1) {
                winner = "Oddius"; // Oddius starts and wins
            } else {
                winner = "Evenius"; // Evenius starts and wins
            }
        } else {  // Even N
            winner = "Oddius"; // Oddius always wins if N is even
        }

        // Output the result for this case
        cout << "Case " << t << ": " << winner << endl;
    }
    return 0;
}
