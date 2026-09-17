#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int n = 6;
    int target = 7;

    int left = 0;
    int sum = 0;
    int minLength = n + 1;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum >= target) {
            int length = right - left + 1;

            if (length < minLength) {
                minLength = length;
            }

            sum -= arr[left];
            left++;
        }
    }

    if (minLength == n + 1) {
        cout << "No Valid Subarray";
    } else {
        cout << "Minimum Subarray Length: " << minLength;
    }

    return 0;
}
