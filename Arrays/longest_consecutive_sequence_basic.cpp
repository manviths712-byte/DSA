#include <iostream>
using namespace std;

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = 6;

    int longest = 1;

    for (int i = 0; i < n; i++) {
        int current = arr[i];
        int count = 1;

        bool found = true;

        while (found) {
            found = false;

            for (int j = 0; j < n; j++) {
                if (arr[j] == current + 1) {
                    current++;
                    count++;
                    found = true;
                    break;
                }
            }
        }

        if (count > longest) {
            longest = count;
        }
    }

    cout << "Longest Consecutive Sequence Length: " << longest;

    return 0;
}
