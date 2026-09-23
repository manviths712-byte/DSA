#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = 5;

    int farthest = 0;

    for (int i = 0; i < n; i++) {

        if (i > farthest) {
            cout << "Cannot Reach Last Index";
            return 0;
        }

        int reach = i + arr[i];

        if (reach > farthest) {
            farthest = reach;
        }

        if (farthest >= n - 1) {
            cout << "Can Reach Last Index";
            return 0;
        }
    }

    cout << "Cannot Reach Last Index";

    return 0;
}
