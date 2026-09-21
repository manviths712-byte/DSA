#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int heights[] = {1, 1, 4, 2, 1, 3};
    int n = 6;

    int expected[6];

    for (int i = 0; i < n; i++) {
        expected[i] = heights[i];
    }

    sort(expected, expected + n);

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (heights[i] != expected[i]) {
            count++;
        }
    }

    cout << "Number of Students Out of Order: " << count;

    return 0;
}
