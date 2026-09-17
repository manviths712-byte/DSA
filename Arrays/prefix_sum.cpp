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

    cout << "Prefix Sum: ";

    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }

    return 0;
}
