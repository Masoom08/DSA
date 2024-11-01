#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int left , int mid, int right){
	int n1= (mid+1) -left
	int n2= right-mid;
	vector<int> v1,v2;
	for(int i=0;i<n1;i++){
		v1[i]=arr[left+i];
	for(int j=0;j<n2;j++){
		v2[j]=arr[mid+1+j];

	int i=0,j=0;
	int k=left;

	while(i<n1 && j<n2){
		if(v1[i]<=v2[j]){
			arr[k]=v1[i];
			i++;
		}
		else{
			arr[k]=v2[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		arr[k]=v1[i];
		i++;
		k++;
	}

	while(j<n2){
		arr[k]=v2[j];
		j++;
		k++;
	}
}


void mergeSort(vector<int>&arr,int left,int right){
	if(left>=right)
	return ;
  int mid =left+(right-left)/2;
  mergeSort(arr,left,mid);
  mergeSort(arr,mid+1,right);
  merge(arr,left,mid,right);
}

void print(vector<int>&arr){
	for(int val:arr)
		cout<<val;
}

int main(){
	int n;
	cout<<"Enter a limit"<<endl;
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter all the elements"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Original Array"<<endl;
	print(arr);
	mergeSort(arr,0,n-1);
	cout<<"Sorted Array"<<endl;
	print(arr);
	return 0;
}
