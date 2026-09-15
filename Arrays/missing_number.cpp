#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    cout << "Missing Number: " << missing;

    return 0;
}
