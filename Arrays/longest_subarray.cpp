#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 1, 1, 1};
    int n = 7;
    int target = 6;

    int left = 0;
    int sum = 0;
    int maxLength = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > target) {
            sum -= arr[left];
            left++;
        }

        if (sum == target) {
            int length = right - left + 1;

            if (length > maxLength) {
                maxLength = length;
            }
        }
    }

    cout << "Longest Subarray Length: " << maxLength;

    return 0;
}
