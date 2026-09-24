#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4};
    int n = 4;

    int result[4];

    // Step 1: Store product of elements on the left
    int leftProduct = 1;

    for (int i = 0; i < n; i++) {
        result[i] = leftProduct;
        leftProduct *= arr[i];
    }

    // Step 2: Multiply by product of elements on the right
    int rightProduct = 1;

    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= arr[i];
    }

    // Step 3: Print result
    cout << "Product of Array Except Self: ";

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
