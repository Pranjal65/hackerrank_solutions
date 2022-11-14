#include <iostream>

using namespace std;


int main(){
    int n;
    
    cin>>n;
   
    int arr1[n];
    int arr2[n];
    
    
    for(int i=0; i<n;i++){
    
        cin>> arr1[i];
    
    }
    for(int i=0; i<n;i++){
    	
        cin>> arr2[i];
    }
    
    
    int a =0;
    int b=0;
    for(int i=0;i<n;i++){
        
        
        if(arr1[i] > arr2[i]){
           a++;
           
        }
        else if(arr2[i] > arr1[i]){
           b++;
          
          
        }
        else if (arr2[i]== arr1[i]){
            continue;
        }
            
       
    
    }
    cout<<a<<" "<<b;
    return 0;
   
    
    
}        

