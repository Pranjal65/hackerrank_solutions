#include<iostream>
using namespace std;

void countsort(int arr[],int n){
	cout<<"in function"<<endl;
	int k=arr[0];
	for(int i=0;i<n;i++){
		k=max(k,arr[i]);
		cout<<"in first for"<<endl;
	}
	cout<<k<<" value of k: "<<endl;
	int count[1000]={0};
	for(int i=0;i<n;i++){
		count[arr[i]]++;
		cout<<"in second for"<<endl;
	}
	for(int i=1;i<=k;i++){
		count[i]=count[i]+count[i-1];
		cout<<"in third for     "<<count[i]<<endl;
	}
	int output[n];
	for(int i=n-1;i>=0;i--){
		output[--count[arr[i]]]=arr[i];
		cout<<"in fourth for"<<endl;
	}
	for(int i=0;i<n;i++){
		arr[i]=output[i];
		cout<<"in last for"<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	countsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<"sorted array is:"<<arr[i]<<" ";
	}
	
}
