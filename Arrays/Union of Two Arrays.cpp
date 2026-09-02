#include <iostream>
using namespace std;

int main() {

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {4, 5, 6, 7, 8};

    int n1 = 5;
    int n2 = 5;

    int result[10];
    int size = 0;

    for(int i = 0; i < n1; i++) {

        result[size] = arr1[i];
        size++;
    }

    for(int i = 0; i < n2; i++) {

        bool alreadyPresent = false;

        for(int j = 0; j < size; j++) {

            if(arr2[i] == result[j]) {
                alreadyPresent = true;
                break;
            }
        }

        if(!alreadyPresent) {
            result[size] = arr2[i];
            size++;
        }
    }

    cout << "Union of two arrays: ";

    for(int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
