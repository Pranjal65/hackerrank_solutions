#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count=0;
	int max = arr[0];
	for(int i=0;i<n;i++){
		if( max<arr[i]){
			max =arr[i];
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]==max){
			count++;
		}
	}
	cout<<count;
	
	
	
}
