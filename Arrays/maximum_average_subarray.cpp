#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 12, -5, -6, 50, 3};
    int n = 6;
    int k = 4;

    int windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i];
        windowSum -= arr[i - k];

        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    double maxAverage = (double)maxSum / k;

    cout << "Maximum Average: " << maxAverage;

    return 0;
}
