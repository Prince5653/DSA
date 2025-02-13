#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    // Constructor with next pointer
    Node(int data1, Node* next1 , Node* back1) {
        data = data1;
        next = next1;
        back = back1;

    }

    // Constructor without next pointer
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* convertArr2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]);//pointing to the head of the linked list
    Node* prev = head; //pointing to the same head node but it is used to move to the next node

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}
void print (Node* head){
    while (head!=NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
int main() {
    vector<int> arr={2, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    print(head);
    return 0;
}