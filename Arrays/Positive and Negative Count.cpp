#include <iostream>
using namespace std;

int main() {

    int arr[8] = {5, -2, 7, -4, 3, -1, 8, -6};
    int n = 8;

    int positiveCount = 0;
    int negativeCount = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] > 0) {
            positiveCount++;
        }
        else if(arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Positive Count = " << positiveCount << endl;
    cout << "Negative Count = " << negativeCount;

    return 0;
}
