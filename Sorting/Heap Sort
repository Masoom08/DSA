#include<bits/stdc++.h>
using namespace std;


void heapify(vector<int> &arr, int n , int i){
  int l=i;
  int left = 2*i+1;
  int right = 2*i+2;

  if(left<n &&arr[left]>arr[l])
    l=left;

  if(right<n && arr[right]>arr[l])
    l=right;

  if(l!=i){
  swap(arr[i],arr[l]);
  heapify(arr,n,l);
  }
}

void heapSort(vector<int> &arr){
  int n=arr.size();
  for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
  for(int i=n-1;i>0;i--){
    swap(arr[0],arr[i]);
    heapify(arr,i,0);
  }
}


void print(vector<int> &arr){
  for(int val : arr)
    cout<<val<<" ";
  cout<<endl;
}

int main(){
  int n;
  cout<<"enter a limit : ";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter all the elements"<<endl;
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"Original array"<<endl;
  print(arr);
  heapSort(arr);
  cout<<"Sorted Array"<<endl;
  print(arr);
  return 0;
}
