#include<bits/stdc++.h>
using namespace std;

class StackNode{
public:
  int data;
  StackNode* next;
};

StackNode* newNode(int data){
    StackNode* stackNode = new StackNode();
    stackNode -> data = data;
    stackNode -> next = NULL;
    return stackNode;
}
int isEmpty(StackNode* root){
  return (!root);
}
void push(StackNode** root , int data){
  StackNode* stackNode = newNode(data);
  stackNode -> next = *root;
  *root = stackNode;
  cout<<data<<"Pushed"<<endl;
}
int pop(StackNode** root){
  if(isEmpty(*root)) return INT_MIN;
  StackNode* temp = *root;
  *root=(*root) -> next;
  int popped = temp -> data;
  free(temp);
  return popped;
}
int peek(StackNode* root){
  if(!isEmpty(root)) return INT_MIN;
  return root->data;
}  

int main(){
  StackNode *root = NULL;
  push(&root,10);
  push(&root,20);
  push(&root,30);
  push(&root,40);
  push(&root,50);

  cout<<pop(&root)<<"Popped"<<endl;
  cout<<"Top"<<peek(root)<<endl;
  cout<<"Elements in stack"<<endl;

  while(!isEmpty(root)){
    cout<<peek(root)<<" ";
    pop(&root);
  }
  return 0;
}
