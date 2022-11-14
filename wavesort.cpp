#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
void swap(vector<int>& arr,int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;	
}

void wavesort(int n,vector<int>& arr){
	sort(arr.begin(),arr.end());
	for(int i=1;i<n;i+=2){
		if(arr[i]>arr[i-1]){
			swap(arr,i,i-1);
		}
		if(arr[i]>arr[i+1]&&i<=n-2){
			swap(arr,i,i+1);
		}
		
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	wavesort(n,arr);
    for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
