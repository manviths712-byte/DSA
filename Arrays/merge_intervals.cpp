#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int intervals[][2] = {
        {1, 3},
        {2, 6},
        {8, 10},
        {9, 12}
    };

    int n = 4;

    // Step 1: Sort intervals by starting value
    sort(intervals, intervals + n);

    cout << "Merged Intervals:" << endl;

    int start = intervals[0][0];
    int end = intervals[0][1];

    // Step 2: Check each interval
    for (int i = 1; i < n; i++) {

        // Overlapping intervals
        if (intervals[i][0] <= end) {

            if (intervals[i][1] > end) {
                end = intervals[i][1];
            }
        }

        // No overlap
        else {
            cout << "[" << start << ", " << end << "]" << endl;

            start = intervals[i][0];
            end = intervals[i][1];
        }
    }

    // Print the last interval
    cout << "[" << start << ", " << end << "]" << endl;

    return 0;
}
