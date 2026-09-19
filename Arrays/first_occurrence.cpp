#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int n = 6;
    int target = 2;

    int left = 0;
    int right = n - 1;
    int answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            answer = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "First Occurrence: " << answer;

    return 0;
}
