#include <iostream>
using namespace std;

int main() {

    int accounts[3][3] = {
        {1, 2, 3},
        {3, 2, 1},
        {4, 5, 6}
    };

    int customers = 3;
    int accountsCount = 3;

    int maxWealth = 0;

    for(int i = 0; i < customers; i++) {

        int sum = 0;

        for(int j = 0; j < accountsCount; j++) {
            sum = sum + accounts[i][j];
        }

        if(sum > maxWealth) {
            maxWealth = sum;
        }
    }

    cout << "Richest Customer Wealth = " << maxWealth << endl;

    return 0;
}
