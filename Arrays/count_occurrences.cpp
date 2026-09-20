#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int n = 6;
    int target = 2;

    int left = 0;
    int right = n - 1;
    int first = -1;

    // Find first occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            first = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    left = 0;
    right = n - 1;
    int last = -1;

    // Find last occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            last = mid;
            left = mid + 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (first == -1) {
        cout << "Count: 0";
    }
    else {
        int count = last - first + 1;
        cout << "Count: " << count;
    }

    return 0;
}
