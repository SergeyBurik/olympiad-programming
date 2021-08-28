// The Fibonacci sequence is defined as follows: f1 = 1, f2 = 1
// fn = f1 + f2 + ... fn (n > 1).
// The beginning of the Fibonacci series looks like this:
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
// Write a function (n: longint):
// longint that returns a given natural value.
//
// INPUT DATA
// One number n is entered.
//
// OUTPUT
// You need to output the value.


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << endl;

    return 0;
}