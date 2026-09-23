#include <iostream>
using namespace std;

int main() {
    int gas[] = {1, 2, 3, 4, 5};
    int cost[] = {3, 4, 5, 1, 2};

    int n = 5;

    int totalGas = 0;
    int totalCost = 0;

    for (int i = 0; i < n; i++) {
        totalGas += gas[i];
        totalCost += cost[i];
    }

    if (totalGas < totalCost) {
        cout << "Starting Station: -1";
        return 0;
    }

    int currentGas = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        currentGas += gas[i] - cost[i];

        if (currentGas < 0) {
            start = i + 1;
            currentGas = 0;
        }
    }

    cout << "Starting Station: " << start;

    return 0;
}
