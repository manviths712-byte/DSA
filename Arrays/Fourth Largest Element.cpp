#include<iostream>
using namespace std;

int main(){

    int arr[6] = {10, 25, 7, 40, 18, 30};
    int n = 6;

    int first = -1;
    int second = -1;
    int third = -1;
    int fourth = -1;

    for(int i = 0; i < n; i++){

        if(arr[i] > first){
            fourth = third;
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first){
            fourth = third;
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second && arr[i] != first){
            fourth = third;
            third = arr[i];
        }
        else if(arr[i] > fourth && arr[i] != third && arr[i] != second && arr[i] != first){
            fourth = arr[i];
        }
    }

    cout << "Fourth Largest = " << fourth << endl;

    return 0;
}
