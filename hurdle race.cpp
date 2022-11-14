#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count=0;
	int dose=0;
	for(int j=0;j<n;j++){
		if(k>=arr[j]){
			continue;
		}
		else{
			count++;
			dose= arr[j]-k;
		}
		
	}
	if(count==0){
		return 0;
	}
	else{
		cout<<dose;
	}
}
