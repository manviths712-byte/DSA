#include <iostream>
using namespace std;

int main() {

    int arr[8] = {1, 0, 3, 0, 12, 5, 0, 2};
    int n = 8;

    int index = n - 1;

    for(int i = n - 1; i >= 0; i--) {

        if(arr[i] != 0) {
            arr[index] = arr[i];
            index--;
        }
    }

    while(index >= 0) {
        arr[index] = 0;
        index--;
    }

    cout << "Array after moving zeroes to beginning: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
