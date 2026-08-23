#include <iostream>
using namespace std;

int main() {

    int arr[8] = {2, 5, 8, 7, 10, 3, 4, 9};
    int n = 8;

    int evenCount = 0;
    int oddCount = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    cout << "Even Count = " << evenCount << endl;
    cout << "Odd Count = " << oddCount;

    return 0;
}
