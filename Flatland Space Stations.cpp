#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[m];
	
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	
	int max=1;
	if(n==m){
			cout<<"0";
			
	}
	else{
	
	    for(int j=0;j<n;j++){
	    	for(int i=0;i<m;i++){
			
		
	            if( abs(j-arr[i])>max && abs(j-arr[i+1])>max){
			        if(abs(j-arr[i]) > abs(j-arr[i+1])){
				        max=abs(j-arr[i]);
			        }
			        else{
				        max=abs(j-arr[i+1]);
				
		    	    }
		        }
		        else{
			         
					continue;
     		    }
		    }
			
	    }
     	cout<<max<<endl;
    }
	
}
