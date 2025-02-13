#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor with next pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor without next pointer
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> arr) {
    Node* head = new Node(arr[0]);//pointing to the head of the linked list
    Node* mover = head; //pointing to the same head node but it is used to move to the next node

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int main() {
    vector<int> arr={2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    
}
