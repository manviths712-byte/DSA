#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {-1, 0, 1, 2, -1, -4};
    int n = 6;

    // Step 1: Sort the array
    sort(arr, arr + n);

    cout << "Triplets with Sum 0:" << endl;

    // Step 2: Fix one number
    for (int i = 0; i < n - 2; i++) {

        // Skip duplicate fixed numbers
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        // Step 3: Two pointers
        int left = i + 1;
        int right = n - 1;

        while (left < right) {

            int sum = arr[i] + arr[left] + arr[right];

            // Step 4: Sum is 0
            if (sum == 0) {

                cout << "[ "
                     << arr[i] << ", "
                     << arr[left] << ", "
                     << arr[right] << " ]" << endl;

                left++;
                right--;

                // Skip duplicate left values
                while (left < right &&
                       arr[left] == arr[left - 1]) {
                    left++;
                }

                // Skip duplicate right values
                while (left < right &&
                       arr[right] == arr[right + 1]) {
                    right--;
                }
            }

            // Step 5: Sum is too small
            else if (sum < 0) {
                left++;
            }

            // Step 6: Sum is too large
            else {
                right--;
            }
        }
    }

    return 0;
}
