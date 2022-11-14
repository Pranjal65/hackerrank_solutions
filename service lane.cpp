#include<iostream>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	int width[n];
	for(int i=0;i<n;i++){
		cin>>width[i];
	}
	for(int k=0;k<t;k++){
		int i,j;
		cin>>i>>j;
		long long int min=1000000;
		for(int a=i;a<=j;a++){
			if(width[a]<min){
				min=width[a];
			}
			else
			    continue;
			
		}
		cout<<min<<endl;
	}
}
