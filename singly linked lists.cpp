#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int length(Node* head) { // uzunlugun tapilmasi
    int l = 0;
    while (head != NULL) {
        l++;
        head = head->next;
    }
    return l;
}

void insertAtHead(Node* &head, int val) {  // basdan elave edir
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val) { //sondan elave edir
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}


void insertAtPos(Node* &head, int pos, int val) {  // indexe gore elave edir 
    if (pos == 0) {
        insertAtHead(head, val);
        return;
    }

    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) { // print edir 
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

 

void deleteHead(Node* &head) { //basdan silir 
    if (head == NULL) return;

    Node* del = head;
    head = head->next;
    delete del;
}

void deleteTail(Node* &head) { // sondan silir 
    if (head == NULL) return;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
}

void deleteValue(Node* &head, int val) { // deyere gore silir 
    if (head == NULL) return;

    if (head->data == val) {
        deleteHead(head);
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != val)
        temp = temp->next;

    if (temp->next == NULL) return;

    Node* del = temp->next;
    temp->next = temp->next->next;
    delete del;
}  

void deleteAtPos(Node* &head, int pos) { // indexe gore silir 
    if (pos == 0) {
        deleteHead(head);
        return;
    }

    Node* temp = head;

    for (int i = 0; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) return;

    Node* del = temp->next;
    temp->next = temp->next->next;
    delete del;
}

bool search(Node* head, int val) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

void reverseList(Node* &head) {
    Node *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}


Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
int main() {
    Node* head = NULL; // boş linked list

    insertAtHead(head, 5);
    insertAtTail(head, 10);
    insertAtPos(head, 1, 7); // 5 -> 7 -> 10

    if (search(head, 7))
        cout << "7 tapildi!" << endl;
    else
        cout << "7 tapilmadi!" << endl;

    printList(head);
    cout << "Length = " << length(head) << endl;
}   





