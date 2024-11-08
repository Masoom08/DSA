#include<bits/stdc++.h>
using namespace std;

struct *Node{
	int data;
	Node* next;
};

class CircularLinkedList{
	Node* head;
public:
	CircularLinkedList(){
    head= nullptr ;
  }
	
	void insertBegin(int value)
  {
    Node* newNode = new Node(value);
    //first element
    if (head == nullptr){
      head = newNode;
      head -> next = head;
    }
    else{
      Node* temp = head;
      // move to last element 
      while(temp -> != head){
        temp = temp -> next;
      }
      newNode -> next = head; // first element
      temp -> next = newNode;
      head = newNode;
    }
  }
  void insertEnd(int value){
    Node* newNode = new Node(value);
    // first element
    if(head == nullptr){
      head = newNode ;
      head -> next = head;
    }
    else{
      Node* temp = head;
      while(temp -> next != head){
        temp = temp -> next;
      }
      temp -> next = newNode;
      head = newNode;
    }
}
void insertPos(int value , int pos){
  Node* newNode = new Node(value);
  if(pos <=1 || head == nullptr){ // first element or first position
      insertFirst(value);
  }
  else{
    Node* temp = head;
    // wait till position
    for(int i=0;i<pos-1 && temp -> next != head ; i++){
      temp = temp -> next;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;
  }
}

void deleteFirst(){
  if(head == nullptr){
    return;
    // one element
  if(head -> next== head}
    delete head;
    head = nullptr;
  }
  else{
    Node* temp = head;
    // traverse
    while(temp -> next != head){
      temp = temp -> next;
    }
    Node* tempHead = head;
    // address of last element = value of second element
    temp -> next= head -> next;
    // address of head = second element
    head = head -> next;
    delete tempHead;
  }
}

void deleteEnd(){
  if(head == nullptr){
    return;
  if(head->next == head){
    delete head;
    head = nullptr;
  }
  else{
    Node* temp = head;
    while(temp -> next -> next != head){
      temp = temp -> next ;
    }
    Node* toDelete = temp-> next;
    temp -> next = head;
    delete toDelete;
  }
}
void deleteKey(int key){
  if(head == nullptr)
    return ;
  if(head->data == key){
    deleteBegin();
    return;
  }
  Node* temp = head;
  do{
    Node* nextNode = temp->next;
            if (nextNode->data == value) {
                temp->next = nextNode->next;
                delete nextNode;
                return;
            }
            temp = temp->next;
        } while (temp != head);
    }
}
void display() {
        if (!head) return;
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
int main(){
CircularLinkedList cll;

cll.insertBegin(10);
cll.insertEnd(20);
cll.insertEnd(30);
cll.insertPos(15,2);
cll.display();
cll.deleteKey(15);
cll.deleteEnd();
cll.display();
cll.deleteBegin();
cll.display();
return 0;
    



