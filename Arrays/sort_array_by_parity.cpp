#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 1, 2, 4};
    int n = 4;

    int left = 0;
    int right = n - 1;

    while (left < right) {

        while (left < right && arr[left] % 2 == 0) {
            left++;
        }

        while (left < right && arr[right] % 2 != 0) {
            right--;
        }

        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    cout << "Array After Sorting by Parity: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
