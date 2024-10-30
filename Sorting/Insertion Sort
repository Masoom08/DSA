#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int> &arr, int n){
  for(int i=1;i<n;i++){
    int key = arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key ){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}

void print(vector<int> &arr){
  for(int n :arr)
    cout<<n<<" ";
}

int main(){
  int n;
  cout<<"enter a limit"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"Enter the elements";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Original Array"<<endl;
  print(arr);

  insertion(arr,n);

  cout<<"Sorted Array"<<endl;
  print(arr);
  return 0;
  }
  
