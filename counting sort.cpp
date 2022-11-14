#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int res[n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				continue;
			}
			else{
				if(arr[i]==arr[j]){
					res[i]++;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
}
