// The boy went up to the toll stairs.
// To step on any step,
// you must pay the amount indicated on it.
// The boy can step over to the next step or
// jump over the step.
// It is required to find out
// what is the smallest amount the boy will need to
// get to the top step.
// Initially, the boy is standing in front of the stairs.
//
// Input data
// The first line of the input file contains
// one natural number N < 100 - the number of steps.
// The next line contains N natural numbers
// not exceeding 100 - the cost of each step (from bottom to top).
//
// Output
// Print one number - the smallest possible cost of going up the ladder.
//
// input
// 3
// 1 3 1
//
// output
// 2

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cost(n);
    for (auto& el : cost) {
        cin >> el;
    }

    vector<int> dp(n + 1);
    dp[0] = cost[0];
    dp[1] = cost[1];

    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i-1], dp[i-2]) + cost[i];
    }

    cout << dp[n-1] << endl;

    return 0;
}