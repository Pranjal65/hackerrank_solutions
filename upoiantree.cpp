#include<iostream>
using namespace std;

int fun(int n){
	int h=1;
	
    if(n==0){
		cout<<"1";
	}
	else{
		for(int j=0;j<=n;j++){
			if(j==0){
				h=1;
			}
			else if( j%2 ==0){
			    h = h+1;
		    }
		    else{
			    h=h*2;
		    }
		}
	}
	return h;
}

int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		
		cin>>n;
		cout<<fun(n);
	}
	
}
