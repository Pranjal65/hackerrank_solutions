#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int k,n;
		cin>>k>>n;
		int cost[n];
		for(int i=0;i<n;i++){
			cin>>cost[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(cost[i]+cost[j]==k){
					cout<<cost[i]+cost[j]<<endl;
				}
				else{
					continue;
				}
			}
		}
		
		
	}
	
}
