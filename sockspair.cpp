#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int count[100]={0};
	
	for(int i=0;i<n;i++){
		for(int j=1;j<=100;j++){
			if( arr[i]==j){
				count[j]+=1;	
			}
			else{
				continue;
			}
		}
	}
	
	

	int pair=0;
	for(int i=0;i<100;i++){
		if(count[i]%2==0){
			pair+=count[i]/2;
			
		}
		else if(count[i]%2!=0){
			int a = (count[i]-1)/2;
			pair+=a;
		}
	}
	cout<<pair;
	

	

}
