#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int> &arr,int n){
  bool flag;
  for(int i=0;i<n-1;i++){
    flag=false;
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        flag = true;
      }
    }
    if(!flag)
      break;
  }
}
void print(vector<int> &arr){
  for(int n : arr){
    cout<<n<<" ";
  }
}


int main(){
  int n;
  cout<<"Enter a limit"<<endl;
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter all the elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Original Array"<<endl;
  print(arr);
  bubble(arr,n);
  cout<<"Sorted Array"<<endl;
  print(arr);
  return 0;
}
