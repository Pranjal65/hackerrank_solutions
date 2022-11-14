#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]<40 && 40-arr[i]>=3){
			cout<<arr[i];
		}
		else if(arr[i]<40 && 40-arr[i]<3){
			cout<<"40";
		}
		else{
			int p=40;
	
		    while(p<100){
			    if(arr[i]<p && p-arr[i]<3){
			     	cout<<p<<endl;
				    break;
		    	}
			    else if(arr[i]<p && p-arr[i]>=3){
				    cout<<arr[i]<<endl;
				    break;
			    }
			    p+=5;
			
		    }
		
    
    
		
	    } 
	}
	
	
}
