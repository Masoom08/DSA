#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int> &arr,int low,int high){
 int pivot = arr[high];
 int i=low-1;
 for(int j=low;j<high;j++){
  if(arr[j]<=pivot){
    i++;
    swap(arr[i],arr[j]);
  }
 }
 swap(arr[i+1],arr[high]);
 return (i+1);
}

void Quick(vector<int>&arr , int low , int high){
  if(low<high){
    int p=Partition(arr,low,high);
    Quick(arr,low,p-1 );
    Quick(arr,p,high);
  }
}

void print(vector<int> &arr){
  for(int val : arr)
    cout<<val<<" ";
}

int main(){
  int n;
  cout<<"Enter a Limit :";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter all the numbers : "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<"Original Array"<<endl;
  print(arr);

  Quick(arr,0,n-1);

  cout<<"Sorted Array"<<endl;
  print(arr);
  return 0;
}
