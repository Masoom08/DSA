#include <iostream>
#define MAX 100
using namespace std;

class Stack{
  int top;
public:
  int a[MAX];
  //Constructor
  Stack(){
    top = -1;
  }
  bool push(int x);
  int pop();
  int peek();
  bool isEmpty();
};
bool Stack::push(int x){
  if(top>=(MAX-1)){
    cout<<"Stack Overflow"<<endl;
    return false;
  }
  else{
    a[++top] = x;
    cout<<x<<"Pushed in stack"<<endl;
    return true;
  }
}
int Stack::pop(){
  if(top<0){
  cout<<"Empty Stack"<<endl;
  return 0;
  }
  else
  return a[top--];
}
int Stack::peek(){
  if(top<0){
  cout<<"Empty Stack"<<endl;
  return 0;
  }
  else
  return a[top];
}
bool Stack::isEmpty(){
  return (top<0);
}
int main(){
  class Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  cout<<s.pop()<<"Popped"<<endl;
  cout<<s.peek()<<"Top Element"<<endl;
  while(!s.isEmpty()){
    cout<<s.peek()<<" ";
    s.pop();
  }
  return 0;
}  
