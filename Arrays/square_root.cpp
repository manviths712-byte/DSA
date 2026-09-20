#include <iostream>
using namespace std;

int main() {
    int n = 25;

    int left = 0;
    int right = n;
    int answer = 0;

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        if (mid * mid <= n) {
            answer = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Square Root: " << answer;

    return 0;
}
