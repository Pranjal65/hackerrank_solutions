#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int maxcount=0;
	for(int i=0;i<m;i++){
		int count=0;
		for(int j=i;j<i+2;j++){
			if(arr[j][i]==1){
				count++;
			}
			else{
				continue;
			}
		}
		if(maxcount<count){
			maxcount=count;
		}
	
	
	}
	cout<<maxcount<<endl;
	
}
