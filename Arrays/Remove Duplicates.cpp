#include <iostream>
using namespace std;

int main() {

    int arr[8] = {1, 2, 2, 3, 4, 4, 5, 5};
    int n = 8;

    int newSize = 0;

    for(int i = 0; i < n; i++) {

        bool duplicate = false;

        for(int j = 0; j < newSize; j++) {

            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
