// Answer recovery calculator
// Time limit for the program: 5 seconds
//
// This task is similar to the previous Calculator task, but in this task you also need to reconstruct the answer.
//
// The executor "Calculator" can perform one of three operations with a given number X and get a new number. Possible operations:
//
// Add one to the number X.
// Multiply X by 2.
// Multiply X by 3.
// Using the least number of operations, get the given number out of the number 1.
//
// Input data
// The program receives as input one number X, not exceeding 10 ^ 6.
//
// Output
// First, print the required number of operations k.
//
// On the second line print k + 1 numbers that are obtained sequentially when performing operations. The first of them must be equal to 1, and the last to N. If there are several solutions, print any of them.
//
// EXAMPLE

//ввод	вывод
// 1    0
//      1

// 5    3
//      1 3 4 5

// 962340 17
//        1 3 9 27 54 55 165 495 1485 4455 8910 17820 17821 53463 160389 160390 481170 962340

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> steps(N + 1, INT_MAX);
    steps[N] = 0;
    vector<int> next_num(N + 1, -1);

    for (int i = N; i > 1; --i) {
        int s = steps[i] + 1;
        // 3 * x
        if (!(i % 3) && steps[i / 3] > s) {
            steps[i / 3] = s;
            next_num[i / 3] = i;
        }
        // 2 * x
        if (!(i % 2) && steps[i / 2] > s) {
            steps[i / 2] = s;
            next_num[i / 2] = i;
        }
        // x + 1
        if (steps[i - 1] > s) {
            steps[i - 1] = s;
            next_num[i - 1] = i;
        }
    }

    cout << steps[1] << endl;
    for (int i = 1; i != -1; i = next_num[i])
        cout << i << ' ';
    cout << endl;
}