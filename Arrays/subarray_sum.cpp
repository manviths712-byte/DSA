#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 9;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == target) {
                cout << "Subarray Found: ";

                for (int k = i; k <= j; k++) {
                    cout << arr[k] << " ";
                }

                return 0;
            }
        }
    }

    cout << "Subarray Not Found";

    return 0;
}
