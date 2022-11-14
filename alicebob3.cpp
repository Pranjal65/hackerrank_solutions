#include <iostream>

using namespace std;


int main(){
    int a0,a1,a2;
    
    cin>> a0>>a1>>a2;
    
    int b0,b1, b2;
    cin>> b0>>b1>>b2;
    
    int alice =0;
    int bob=0;
    
    while(1){
	
    if(a0>b0){
        alice++;
           
    }
    else if(b0>a0){
       bob++;
          
          
    }
    else if (a0==b0){
       continue;
    }
    
    else if(a1>b1){
        alice++;
           
    }
    else if(b1>a1){
       bob++;
          
          
    }
    else if (a1==b1){
        continue;
    }
    else if(a2>b2){
        alice++;
           
    }
    else if(b2>a2){
       bob++;
          
          
    }
    else if (a2==b2){
        continue;
    }
        
        
    cout<<alice<<" "<<bob;
	return 0;    
    }        
       
    
}
    
   
    
