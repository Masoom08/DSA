#include<bits/stdc++.h>
using namespace std;

class Node{
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
        
        // Update head
        head = newNode;
    }
    
    return head;
}
Node* insertAtEnd(Node* head, int newData) {
    Node* newNode = new Node(newData);
    
    if (!head) {
      
        // List is empty
        newNode->next = newNode->prev = newNode;
        head = newNode;
    } else {
      
        // List is not empty
        Node* last = head->prev; 
        
        // Insert new node at the end
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
          if (pos > 1) {
             return nullptr; 
          }
          newNode->prev = newNode;
          newNode->next = newNode;
          return newNode; 
    }
    if (pos == 1) {
      insertBegin( head, int value) 
      return head;
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

    if (curr->next != nullptr) {
        curr->next->prev = newNode;
    }
    curr->next = newNode;
    return head;
}
