#include <iostream>
using namespace std;

int main() {

    int arr[] = {3, 4, -1, 1};
    int n = 4;

    // Step 1: Put every positive number
    // at its correct index
    for (int i = 0; i < n; i++) {

        while (arr[i] >= 1 &&
               arr[i] <= n &&
               arr[arr[i] - 1] != arr[i]) {

            int index = arr[i] - 1;

            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }

    // Step 2: Find the first position
    // where the number is incorrect
    for (int i = 0; i < n; i++) {

        if (arr[i] != i + 1) {
            cout << "First Missing Positive: " << i + 1;
            return 0;
        }
    }

    // If 1 to n are all present
    cout << "First Missing Positive: " << n + 1;

    return 0;
}
