# include<iostream>
using namespace std;

int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	
	int minsum=0;
	for(int i=0;i<4;i++){
	    minsum = minsum +arr[i];
		
	}
	int maxsum=0;
	for(int i=1;i<5;i++){
		maxsum=maxsum+arr[i];
		
	}
	cout<<minsum<<" "<<maxsum;
	return 0;
	
	
}
