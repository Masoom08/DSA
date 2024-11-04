#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    // Data part of the node.
    int data;
    // Pointer to the next node.
    Node* next;
    // Pointer to the previous node.
    Node* prev;

    // Constructor to initialize the node with given data.
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void insertBegin(Node* &head, int data){
  Node* newNode = new Node(data);

  if (head == nullptr){
    head = newNode;
    return;
  }
  newNode->next = head;
  head ->prev = newNode;
  head = newNode;
}

void insertEnd(Node* &head, int data){
  Node *newNode = new Node(data);
  if(head ==nullptr){
    head = newNode;
    return;
  }
  Node* temp = head;
  while( temp -> next!= nullptr){
    temp= temp -> next;
  }
  temp -> next= newNode;
  newNode -> prev = temp;
}

void insertPos(Node* &head, int data, int position){
  if(position < 1){
    cout<<"Invalid position"<<endl;
    return;
  }

  if(position ==1){
    insertBegin(head , data);
    return ;
  }

  Node* newNode = new Node(data);
  Node* temp = head;

  for (int i = 1; temp != nullptr && i < position - 1;i++) {
        temp = temp->next;
    }

  if (temp == nullptr) {
        cout << "Position greater than the number of nodes."
             << endl;
        return;
  }
  newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != nullptr) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}
void deleteBegin(Node* &head){
  if(head ==nullptr){
    cout<< "This list is already empty"<<endl;
    return ;
  }

  Node* temp = head;
  head = head ->next;
  if(head != nullptr){
    head->prev = nullptr;
  }
  delete temp;
}

void deleteEnd(Node* &head){
  if(head ==nullptr){
    cout<< "This list is already empty"<<endl;
    return ;
  }

  Node* temp = head;
  if(temp->next ==nullptr){
    head = nullptr;
    delete temp;
    return;
  }

  while(temp ->next!= nullptr){
    temp = temp->next;
  }
  temp ->prev->next = nullptr;
  delete temp;
}
void deletePos(Node*&head , int position){
  if(head ==nullptr){
    cout<<"Empty"<<endl;
    return ;
  }
  if(position ==1){
    deleteBegin(head);
    return ;
  }

  Node* temp = head;

  for (int i = 1; temp != nullptr && i < position; i++) {
        temp = temp->next;
  }
  if (temp == nullptr) {
        cout << "Position is greater than the number of nodes."<< endl;
        return;
    }
  if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }
    delete temp;
}

void printListForward(Node* head)
{
    Node* temp = head;
    cout << "Forward List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printListReverse(Node* head)
{
    Node* temp = head;
    if (temp == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    cout << "Reverse List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}


int main()
{
    Node* head = nullptr;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertBegin(head, 5);
    
    insertPos(head, 15, 2);
    cout << "After Insertions:" << endl;
    printListForward(head);
    printListReverse(head);
    deleteBegin(head);
    deleteEnd(head);
    deletePos(head, 2);

    cout << "After Deletions:" << endl;
    printListForward(head);

    return 0;
}



