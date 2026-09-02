#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int arr[6] = {10, 3, 7, 2, 15, 5};
    int n = 6;

    int minDifference = abs(arr[0] - arr[1]);

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            int difference = abs(arr[i] - arr[j]);

            if(difference < minDifference) {
                minDifference = difference;
            }
        }
    }

    cout << "Smallest Difference = " << minDifference;

    return 0;
}
