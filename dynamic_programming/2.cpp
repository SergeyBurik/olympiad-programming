// At the top of the ladder containing N steps,
// there is a ball that starts jumping down them to the base.
// The ball can jump to the next step, one step or 2.
// (That is, if the ball is on the 8th step,
// then it can move to the 7th, 6th or 5th.)
// Determine the number of possible "routes"
// ball from the top to the ground.
//
// Input data
// One number is entered 0 <N <31.
//
// Output
// Print one number - the number of routes.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> dp(n + 1);
    dp[n] = 1;

    if (n >= 2) {
        dp[n - 1] = 1;
    } else {
        cout << 1 << endl;
        return 0;
    }

    if (n >= 3) {
        dp[n - 2] = 2;
    } else {
        cout << 2 << endl;
        return 0;
    }

    for (int i = n - 3; i >= 0; i--) {
        dp[i] = dp[i + 1] + dp[i + 2] + dp[i + 3];
    }

    cout << dp[0] << endl;

    return 0;
}