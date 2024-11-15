#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

Node* insertBegin(Node* head, int newData) {
    Node* newNode = new Node(newData);

    if (!head) {
        newNode->next = newNode->prev = newNode;
        head = newNode;
    } else {
        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        head->prev = newNode;
        last->next = newNode;
        head = newNode;
    }

    return head;
}

Node* insertAtEnd(Node* head, int newData) {
    Node* newNode = new Node(newData);

    if (!head) {
        newNode->next = newNode->prev = newNode;
        head = newNode;
    } else {
        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
    }

    return head;
}

Node* insertPos(Node* head, int pos, int value) {
    Node* newNode = new Node(value);

    if (!head) {
        if (pos != 1) {
            cout << "Position out of range!" << endl;
            return nullptr;
        }
        newNode->next = newNode->prev = newNode;
        return newNode;
    }

    if (pos == 1) {
        return insertBegin(head, value);
    }

    Node* curr = head;
    for (int i = 1; i < pos - 1; i++) {
        curr = curr->next;
        if (curr == head) {
            cout << "Position out of range!" << endl;
            return head;
        }
    }

    newNode->next = curr->next;
    newNode->prev = curr;
    curr->next->prev = newNode;
    curr->next = newNode;

    return head;
}

Node* delBegin(Node* head) {
    if (!head) return nullptr;

    Node* temp = head;

    if (head->next == head) {
        delete head;
        return nullptr;
    }

    Node* last = head->prev;
    head = head->next;
    head->prev = last;
    last->next = head;

    delete temp;
    return head;
}

Node* delLast(Node* head) {
    if (!head) return nullptr;

    if (head->next == head) {
        delete head;
        return nullptr;
    }

    Node* last = head->prev;
    Node* secondLast = last->prev;

    secondLast->next = head;
    head->prev = secondLast;

    delete last;
    return head;
}

Node* delPos(Node* head, int pos) {
    if (!head) return nullptr;

    if (pos == 1) {
        return delBegin(head);
    }

    Node* curr = head;
    for (int i = 1; i < pos; i++) {
        curr = curr->next;
        if (curr == head) {
            cout << "Position out of range!" << endl;
            return head;
        }
    }

    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;

    delete curr;
    return head;
}

void display(Node* head) {
    if (!head) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    Node* head = nullptr;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);

    cout << "Original list: ";
    display(head);

    cout << "Deleting node at position 1..." << endl;
    head = delPos(head, 1);
    display(head);

    cout << "Deleting node at position 3..." << endl;
    head = delPos(head, 3);
    display(head);

    cout << "Deleting node at position 5 (out of range)..." << endl;
    head = delPos(head, 5);
    display(head);

    return 0;
}
