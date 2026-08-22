#include <iostream>
using namespace std;

int main() {

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    bool sorted = true;

    for(int i = 0; i < n - 1; i++) {

        if(arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted) {
        cout << "Array is Sorted";
    }
    else {
        cout << "Array is Not Sorted";
    }

    return 0;
}
