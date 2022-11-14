#include<iostream>
using namespace std;

int main(){
	
	unsigned long long int n;
	cin>>n;
	
	long long int a[20000];
	a[0]=1;
	for(int i=n;i>1;i--){
		for(int j=0;j<1;j++){
			
			a[j]= a[j]*i;
		}  
		
	}
	for(int i=0;i<1;i++){
		cout<<a[i];
	}
	
	
	
}
