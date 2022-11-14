#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int num= arr[n-1];
   for(int i= n-2;i>=0;--i){
   	    if(arr[i]>num){
   		    arr[i+1]=arr[i];
   		    for(int i=0;i<n;i++){
	        	cout<<arr[i]<<"  ";
         	}
        	cout<<endl;
	    }
	    else if((arr[i]<num) && (arr[i+1]>num)){
	   	    arr[i+1]=num;
	   	    for(int i=0;i<n;i++){
		    cout<<arr[i]<<"  ";
	    }
	    cout<<endl;
	   	break;
	   }
	   else{
            arr[i]=num;
            for(int i=0;i<n;i++){
               cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }
   }

}
