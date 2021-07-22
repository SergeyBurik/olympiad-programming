// Time limit: 1 second
// Memory limit: 256 megabytes
//
// Gleb loves shopping. Once he got the idea to choose a T-shirt
// and pants so as to look as stylish as possible in them.
// In Gleb's understanding, the less the difference in the color of
// the elements of his clothes, the greater the style of clothes.
//
// There are N (1 <= N <= 100,000) T-shirts and M (1 <= M <= 100,000) pants,
// each element is known for its color (an integer from 1 to 10,000,000).
// Help Gleb choose one T-shirt and one pants so that the difference
// in their color is as small as possible.
//
// INPUT DATA
// First, information about T-shirts is entered:
// in the first line there is an integer N (1 <= N <= 100,000)
// and in the second N integers from 1 to 10,000,000 -
// the colors of the available T-shirts.
// It is guaranteed that the color numbers are in ascending order
// (in particular, the colors of no two T-shirts do not match).
//
// Then, in the same format, there is a description of the pants:
// their number is M 1 <= M <= 100,000)
// and in the next line there are M integers
// from 1 to 10,000,000 in ascending order - the colors of the pants.
//
// OUTPUT
// Print a pair of non-negative numbers -
// the color of the shirt and the color of the pants,
// which Gleb should choose.
// If there are several choices, print any of them.
//
// EXAMPLES
// INPUT
// 2
// 3 4
// 3
// 1 2 3
// OUTPUT
// 3 3
//
// INPUT
// 2
// 4 5
// 3
// 1 2 3
// OUTPUT
// 4 3

#include <iostream>
#include <vector>

using namespace std;

std::istream& operator>>(std::istream& is, vector<int>& obj) {
    for (auto& el: obj) {
        cin >> el;
    }
    return is;
}

int main() {
    int n, m;
    cin >> n;
    vector<int> n_list(n);
    cin >> n_list;

    cin >> m;
    vector<int> m_list(m);
    cin >> m_list;

    int n_curr = 0, m_curr = 0;
    vector<int> d(3);
    d[0] = 1000000;

    while (n_curr < n && m_curr < m) {
        int n_t = n_list[n_curr];
        int m_t = m_list[m_curr];
        if (abs(n_t - m_t) < d[0]) {
            d[1] = n_t;
            d[2] = m_t;
            d[0] = abs(n_t - m_t);
        }
        if (n_t > m_t) {
            m_curr++;
        } else {
            n_curr++;
        }
    }

    cout << d[1] << " " << d[2];
}