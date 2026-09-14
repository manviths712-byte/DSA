#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = 7;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << "First Repeating Element: " << arr[i];
                return 0;
            }
        }
    }

    cout << "No Repeating Element";

    return 0;
}
