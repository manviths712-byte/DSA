#include <iostream>
using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    cout << "Leaders: ";

    for (int i = 0; i < n; i++) {
        bool leader = true;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }

        if (leader) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
