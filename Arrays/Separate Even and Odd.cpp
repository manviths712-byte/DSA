#include <iostream>
using namespace std;

int main() {

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;

    int index = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] % 2 == 0) {
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;

            index++;
        }
    }

    cout << "Array after separating even and odd: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
