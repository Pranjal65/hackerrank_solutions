#include <iostream>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    if(p<=n/2){
        cout<<p/2;
    }
    else if(p>n/2 && (n-p)==1){
        cout<<"1";
    }    
    else if(p>n/2){
       int m = (n-p)/2;
       cout<<m;
    }    
   
        
    
    else if(p==1 || p==n){
        cout<<"0";
    }
    
}

