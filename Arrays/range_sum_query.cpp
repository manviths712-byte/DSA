#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = 5;

    int prefix[n];

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int L = 1;
    int R = 3;

    int rangeSum;

    if (L == 0) {
        rangeSum = prefix[R];
    } else {
        rangeSum = prefix[R] - prefix[L - 1];
    }

    cout << "Range Sum: " << rangeSum;

    return 0;
}
