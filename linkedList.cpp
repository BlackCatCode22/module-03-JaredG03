#include <iostream>
using namespace std;

class Node {
public:
    int Value;
    Node* Next;

    Node(int val) : Value(val), Next(NULL) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(NULL) {}


void insertEnd(int value) {
    Node* newNode = new Node(value);
    newNode->Value = value;
    newNode->Next = NULL;
    
    if(head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->Next != NULL) {
            current = current->Next;
        }
        current->Next = newNode;
    }
}

void deleteNode(int value) {
    if(head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

if (head->Value == value) {
    Node* temp = head;
    head = head->Next;
    delete temp;
    return;
}
Node* current = head;
while (current->Next != NULL  && current->Next->Value != value) {
    current = current->Next;
}
if (current->Next == NULL){
    cout << "Node with value" << value << "not found." << endl;
    return;
}
Node* temp = current->Next;
current->Next = current->Next->Next;
delete temp;
}

void displayList() {
    Node* current = head;
    while (current != NULL) {
        cout << current->Value << " ";
        current = current->Next;
    }
    cout << endl;
    }
};

int main() {
LinkedList linkedList;

linkedList.insertEnd(1);
linkedList.insertEnd(2);
linkedList.insertEnd(3);
linkedList.insertEnd(4);
linkedList.insertEnd(5);
linkedList.insertEnd(6);

cout << " List: ";
linkedList.displayList();

linkedList.deleteNode(2);
linkedList.deleteNode(4);
linkedList.deleteNode(6);

cout << "Updated List: ";
linkedList.displayList();

cin.get();
return 0;

}
