#include <iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node *next;
};

void append(Node** headRef, int newData) {
    Node* newNode = new Node();
    Node *last = *headRef;

    newNode->data = newData;
    newNode->next = NULL;

    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
    return;
}

void deleteNode(Node** headRef, int key)
{
    Node* temp = *headRef;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *headRef = temp->next; 
        delete temp;            
        return;
    } else {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
 
        if (temp == NULL)
            return;
    
        prev->next = temp->next;
    
        delete temp;
    }
}

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;


    printList(head);
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);

    cout<<"Created Linked list is: ";
    printList(head);


    return 0;
}
