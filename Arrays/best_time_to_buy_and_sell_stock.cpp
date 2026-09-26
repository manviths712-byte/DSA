#include <iostream>
using namespace std;

int main() {

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {

        // Update minimum buying price
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        // Calculate today's possible profit
        int profit = prices[i] - minPrice;

        // Update maximum profit
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    cout << "Maximum Profit: " << maxProfit;

    return 0;
}
