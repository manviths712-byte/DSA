#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;

    // Step 1: Choose a candidate
    int candidate = arr[0];
    int count = 1;

    // Step 2: Find the majority candidate
    for (int i = 1; i < n; i++) {

        if (arr[i] == candidate) {
            count++;
        }
        else {
            count--;
        }

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    // Step 3: Verify the candidate
    int frequency = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            frequency++;
        }
    }

    // Step 4: Check majority condition
    if (frequency > n / 2) {
        cout << "Majority Element: " << candidate;
    }
    else {
        cout << "No Majority Element";
    }

    return 0;
}
