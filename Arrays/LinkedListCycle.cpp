
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {
    Node* n1 = new Node(3);
    Node* n2 = new Node(2);
    Node* n3 = new Node(0);
    Node* n4 = new Node(-4);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    // pos = 1
    n4->next = n2;

    if (hasCycle(n1)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
