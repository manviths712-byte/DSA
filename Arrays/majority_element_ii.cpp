#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 1, 1, 3, 3, 2, 2, 2};
    int n = 8;

    // Step 1: Find two possible candidates
    int candidate1 = 0;
    int candidate2 = 0;

    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] == candidate1) {
            count1++;
        }
        else if (arr[i] == candidate2) {
            count2++;
        }
        else if (count1 == 0) {
            candidate1 = arr[i];
            count1 = 1;
        }
        else if (count2 == 0) {
            candidate2 = arr[i];
            count2 = 1;
        }
        else {
            count1--;
            count2--;
        }
    }

    // Step 2: Verify candidates
    count1 = 0;
    count2 = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] == candidate1) {
            count1++;
        }

        if (arr[i] == candidate2) {
            count2++;
        }
    }

    cout << "Elements appearing more than n/3 times: ";

    if (count1 > n / 3) {
        cout << candidate1 << " ";
    }

    if (candidate2 != candidate1 && count2 > n / 3) {
        cout << candidate2 << " ";
    }

    return 0;
}
