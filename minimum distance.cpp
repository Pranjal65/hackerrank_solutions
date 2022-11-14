#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int flag=0;
	int mindist=10000;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				if(mindist>abs(i-j)){
					mindist=abs(i-j);
					flag++;
				}
				else{
					continue;
				}
				
			}
			else{
				continue;
			}
			
		}
	}
	if(flag>0){
		cout<<mindist;
	}
	else{
		cout<<"-1";
	}
}
