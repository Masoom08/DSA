#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){
  for(int i=0;i<arr.size()-1;i++){
    int min=i;
    for(int j=i+1;j<arr.size();j++){
      if(arr[j]>arr[min]){
        min=j;
      }
    }
    swap(arr[i],arr[min]);
  }
}

void print(vector<int> &arr){
  for(int n : arr){
    cout<<n<<" ";
  }
}

int main(){
  int n;
  cout<<"Enter a limit "<<endl;
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter all the elements "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Original Array :"<<endl;
  print(arr);
  selectionSort(arr);
  cout<<"Sorted Array :"<<endl;
  print(arr);
  return 0;
}
