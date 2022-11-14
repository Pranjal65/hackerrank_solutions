#include<iostream>
using namespace std;

int main(){
	int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	
	   
        int s=0;
        int e=n;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==k){
                cout<<mid;
                break;
            }
            else if(arr[mid]<k){
                s=mid-1;
            }
            else{
                e=mid+1;
            }
            
        }
        
   	
}

 


 
 
 
 
 
 
 
 
