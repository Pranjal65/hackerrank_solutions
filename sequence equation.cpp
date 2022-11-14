#include<iostream>
using namespace std;

int main(){
	long long int n,s;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<n;j++){
			s = arr[j];
			//cout<<arr[j]<<"     "<<arr[s]<<endl;
			if(arr[j]==n){
				if(arr[s-1]==i){
					cout<<"hiiii"<<j+1<<endl;
				}
				
				else{
					continue;
				}
			}
			else if(arr[s-1]==i){
					cout<<"hiiii"<<j+1<<endl;
			}
			else{
				continue;
			}
		}
	}
	
}
