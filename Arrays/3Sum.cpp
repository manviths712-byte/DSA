#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[6] = {-1, 0, 1, 2, -1, -4};
    int n = 6;

    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: Fix one element
    for(int i = 0; i < n - 2; i++){

        // Skip duplicate fixed elements
        if(i > 0 && arr[i] == arr[i - 1]){
            continue;
        }

        int fixed = arr[i];

        // Step 3: Use two pointers
        int left = i + 1;
        int right = n - 1;

        while(left < right){

            int sum = fixed + arr[left] + arr[right];

            // Step 4: Found a valid triplet
            if(sum == 0){

                cout << fixed << " "
                     << arr[left] << " "
                     << arr[right] << endl;

                left++;
                right--;
            }

            // Step 5: Sum is too small
            else if(sum < 0){

                left++;
            }

            // Step 6: Sum is too large
            else{

                right--;
            }
        }
    }

    return 0;
}
