#include <iostream>
using namespace std;

/*int arraysum(int n){
	int arr[n];
	int sum =0;
    for(int i=0; i<=n;i++){
	    sum = sum+ arr[i];
	}
	return sum;
}*/

int main(){
	int n;
	cout<<"enter array length ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n;i++){
		cout<<"enter array element";
		cin>> arr[i];
	
		
	}
//	while(n){
		int sum =0;
        for(int i=0; i<n;i++){
	        sum = sum + arr[i];
	        
	   
        }
     	cout<<sum;
     	//break;
     	
	//}

	

  
	
}
