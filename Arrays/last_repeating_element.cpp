#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = 7;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] == arr[j]) {
                cout << "Last Repeating Element: " << arr[i];
                return 0;
            }
        }
    }

    cout << "No Repeating Element";

    return 0;
}
