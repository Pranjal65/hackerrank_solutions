#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	while(n>0){
		int min=100000;
		int count=0;
		for(int i=0;i<n;i++){
			if(arr[i]<min){
				min=arr[i];
			}
			else
			    continue;    
		}
		int newindex=0;
		for(int j=0;j<n;j++){
			
			if(arr[j]==min){
				count++;
				continue;
			}
			else
			    arr[newindex]=arr[j]-min;
			    newindex++;
		}
		cout<<n<<endl;
		n=n-count;
		
	}
	return 0;
}
