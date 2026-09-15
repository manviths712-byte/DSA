#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = 7;

    for (int i = 0; i < n; i++) {
        bool repeating = false;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                repeating = true;
                break;
            }
        }

        if (!repeating) {
            cout << "First Non-Repeating Element: " << arr[i];
            return 0;
        }
    }

    cout << "No Non-Repeating Element";

    return 0;
}
