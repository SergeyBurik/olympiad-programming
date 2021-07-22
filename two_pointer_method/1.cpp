// There is a pedestrian street in the city center -
// one of the most popular walking places for residents of the city.
// It is very pleasant to walk along this street,
// because along the street there are many funny monuments.
// Girl Masha likes two boys from her school,
// and she just can't make a choice between them.
// To make the final decision,
// she decided to date both boys at the same time.
// Masha wants to choose two monuments on the pedestrian street,
// near which the boys will be waiting for her.
// At the same time,
// she wants to choose such monuments so that the boys do not see each other.
// Masha knows that because of the fog,
// the boys will see each other
// only if they are at a distance of no more than r meters.
// Masha got interested in how many ways there are to choose two different monuments for organizing dates.
//
// INPUT FILE FORMAT
// The first line of the input file contains
// two integers "n" and "r" (2 <= n <= 300000, 1 <= r <= 10 ^ 9) -
// the number of monuments and the maximum distance at which the boys can see each other.
// The second line contains n positive numbers (d1 ... dn),
// where is the distance from the th monument to the beginning of the street.
// All monuments are located at different distances from the beginning of the street.
// The monuments are listed in ascending order of distance from the beginning of the street.
//
// OUTPUT FILE FORMAT
//  Print one number - the number of ways to choose two dating sites.
//
// input
// 4 4
// 1 3 5 8
// Output
// 2

#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, r, res = 0;
    cin >> n >> r;

    vector<int> data(n);
    for (auto& el : data) {
        cin >> el;
    }

    for (int i = 0; i < n; i++) {
        int t = i + 1;
        while (t < n && data[t] - data[i] <= r) {
            t++;
        }
        res += n - t;
    }
    cout << res << endl;
}
