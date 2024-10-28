#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,key;
  bool flag = false;
  cout<<"Enter a limit"<<endl;
  cin>>n;
  cout<<"Enter the values of array"<<endl;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  cout<<"Enter the key value"<<endl;
  cin>>key;

  int start=0,end = n-1;
  
  while(start<=end){
    int mid = start+(end-start)/2;

    if(v[mid] == key){
      cout<< mid;
      flag = true;
      break;
    }
    else if(v[mid] < key)
      start = mid + 1;
    else
      end = mid -1;
  }
  if(!flag)
    cout<<"elements not found "<<endl;
  return 0;
}
