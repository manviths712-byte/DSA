#include <iostream>
using namespace std;

int kadane(int arr[], int n) {
    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {5, -3, 5};
    int n = 3;

    int normalMax = kadane(arr, n);

    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    int invertedMax = kadane(arr, n);

    int circularMax = totalSum + invertedMax;

    if (circularMax > normalMax) {
        cout << "Maximum Circular Subarray Sum: "
             << circularMax;
    } else {
        cout << "Maximum Circular Subarray Sum: "
             << normalMax;
    }

    return 0;
}
