#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=0;
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum = arr[i]+arr[j];
			cout<<sum<<endl;
			if(sum%k!=0){
				count++;
				
			}
			else{
				continue;
			}
			
			
		}
	}
	if(count==2*n){
		cout<<count/2;
	}
	else{
		cout<<count;
	}
	return 0;
}
