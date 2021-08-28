// Time limit for the program: 2 seconds
//
// Solving the problem from the math test,
// Vasya received the answer in the form of the union of
// segments [Li, Ri] on the number line. However,
// some of these segments may intersect with each other,
// which Vasya does not like too much.
// You are required to present Vasin's answer as
// a union of the minimum number of disjoint segments.
//
// Input data
// The first line of the input contains a number N (1 <= N <= 300000).
// The following lines list pairs of integers Li and Ri (-50000 <= Li <= Ri < 5000).
// Please note that the ends of the segments can coincide,
// in this case the segment degenerates into a point.
//
// Output
// On the first line print a number -
// the number of segments in the desired union.
// In the next lines print these segments themselves in
// the same format as in the input file.
// The list of segments must be sorted in ascending order of the left end.
//
// EXAMPLE
// input
// 4
// 0 2
// 4 5
// 13
// 5 6

// Output
// 2
// 0 3
// 4 6

#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <pair <int, int> > events;
    for (int i = 0; i < n; ++i)
    {
        int l, r;
        cin >> l >> r;
        events.push_back(make_pair(l, -1));
        events.push_back(make_pair(r, 1));
    }
    sort(events.begin(), events.end());
    vector <int> ans;
    int count = 0;
    for (auto event: events)
    {
        int x = event.first;
        int type = event.second;
        count -= type;
        if (count == 0 || count == 1 && type == -1)
            ans.push_back(x);
    }
    cout << ans.size() / 2 << endl;
    for (int i = 0; i < ans.size(); i += 2)
        cout << ans[i] << " " << ans[i + 1] << endl;
    return 0;
}