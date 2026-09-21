#include <iostream>
using namespace std;

int main() {
    string s = "abcd";
    string t = "abcde";

    char difference = 0;

    for (char ch : s) {
        difference = difference ^ ch;
    }

    for (char ch : t) {
        difference = difference ^ ch;
    }

    cout << "Difference: " << difference;

    return 0;
}
