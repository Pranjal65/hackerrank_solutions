#include<iostream>
using namespace std;

int main(){
	int t,a,k;
	cin>>t>>a>>k;
	long long int students[a];
	for(int i=0; i<a;i++){
		cin>>students[i];
	}
	int count=0;
	for(int i=0;i<a;i++){
		if(students[i]<=0){
			count++;
		}
		else{
			continue;
		}
	}
	if(count<k){
		cout<<"YES"<<endl;
		
	}
	else{
		cout<<"NO"<<endl;
	}
}
