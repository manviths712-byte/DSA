#include <iostream>
using namespace std;

int main() {

    int arr[6] = {10, 3, 7, 2, 15, 5};
    int n = 6;

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            largest = arr[i];
        }

        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    int difference = largest - smallest;

    cout << "Largest Difference = " << difference;

    return 0;
}
