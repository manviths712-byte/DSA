#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;

    // If k is greater than n
    k = k % n;

    // Step 1: Reverse the complete array
    reverse(arr, arr + n);

    // Step 2: Reverse the first k elements
    reverse(arr, arr + k);

    // Step 3: Reverse the remaining elements
    reverse(arr + k, arr + n);

    cout << "Array after Right Rotation by " << k << ": ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
