#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3};
    int n = 3;

    // Step 1: Find the first decreasing element
    int i = n - 2;

    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // Step 2: Find element just greater than arr[i]
    if (i >= 0) {
        int j = n - 1;

        while (arr[j] <= arr[i]) {
            j--;
        }

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 3: Reverse the remaining part
    int left = i + 1;
    int right = n - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    cout << "Next Permutation: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
