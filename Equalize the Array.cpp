#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxcount=0;
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=i;j<n;j++ ){
			if(arr[i]==arr[j]){
				count++;
			}
			else{
				continue;
			}
			if(maxcount<count){
				maxcount=count;
			}
			else{
				continue;
			}
		}
	}
	cout<<n-maxcount<<endl;
}
