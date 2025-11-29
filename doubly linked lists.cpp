#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Uzunluğu tapmaq
int length(Node* head) {
    int l = 0;
    while (head != NULL) {
        l++;
        head = head->next;
    }
    return l;
}

// Search funksiyası
bool search(Node* head, int val) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

// Insert at head
void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

// Insert at tail
void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Insert at position
void insertAtPos(Node* &head, int pos, int val) {
    if (pos == 0) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) return;

    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

// Print forward
void printForward(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Print backward
void printBackward(Node* tail) {
    while (tail != NULL) {
        cout << tail->data;
        if (tail->prev != NULL) cout << " -> ";
        tail = tail->prev;
    }
    cout << endl;
}

// Delete node
void deleteNode(Node* &head, Node* del) {
    if (head == NULL || del == NULL) return;

    if (head == del)
        head = del->next;

    if (del->next != NULL)
        del->next->prev = del->prev;

    if (del->prev != NULL)
        del->prev->next = del->next;

    delete del;
}

// Delete by value
void deleteValue(Node* &head, int val) {
    Node* temp = head;
    while (temp != NULL && temp->data != val)
        temp = temp->next;

    if (temp != NULL)
        deleteNode(head, temp);
}

// Delete at position
void deleteAtPos(Node* &head, int pos) {
    if (head == NULL) return;

    Node* temp = head;
    for (int i = 0; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp != NULL)
        deleteNode(head, temp);
}

// Delete head
void deleteHead(Node* &head) {
    if (head != NULL)
        deleteNode(head, head);
}

// Delete tail
void deleteTail(Node* &head) {
    if (head == NULL) return;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    deleteNode(head, temp);
}

// Reverse the list
void reverseList(Node* &head) {
    Node* temp = NULL;
    Node* current = head;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
        head = temp->prev;
}

// Find middle node
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// Main funksiyası
int main() {
    Node* head = NULL;

    insertAtHead(head, 10);   // 10
    insertAtTail(head, 20);   // 10 -> 20
    insertAtPos(head, 1, 15); // 10 -> 15 -> 20

    cout << "Forward: ";
    printForward(head);

    Node* tail = head;
    while (tail->next != NULL) tail = tail->next;
    cout << "Backward: ";
    printBackward(tail);

    cout << "Length: " << length(head) << endl;

    cout << (search(head, 15) ? "15 tapildi!" : "15 tapilmadi!") << endl;

    deleteAtPos(head, 1); // 15 silinir
    cout << "After deletion: ";
    printForward(head);

    Node* mid = findMiddle(head);
    if (mid != NULL)
        cout << "Middle node: " << mid->data << endl;

    reverseList(head);
    cout << "After reverse: ";
    printForward(head);

    return 0;
}

