#include<iostream>
using namespace std;

int main(){
	int v;
	cin>>v;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	if(v==arr[n/2]){
        cout<<n/2<<endl;
    }
    else if(v<arr[n/2]){
        for(int i=0;i<n/2;i++){
            if(arr[i]==v){
                cout<<i<<endl;
            }
            else{
                continue;
            }
        }
        
    }
    else{
        for(int i=n/2;i<n;i++){
            if(arr[i]==v){
                cout<<i<<endl;
            }
            else continue;
        }
    }
}
