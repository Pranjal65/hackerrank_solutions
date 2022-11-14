#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int b,w,bc,wc,z;
        cin>>b>>w;
        cin>>bc>>wc>>z;
        long long int bc1,wc1;
        
        if(bc<z && wc<z){
            cout<<(b*bc)+(w*wc)<<endl;
        }
        else if (bc==z && wc==z){
            cout<<(b*bc)+(w*wc)<<endl;
        }
        else{
            if(bc>wc+z){
                bc1 = wc+z;
                
                cout<<(w*wc)+(b*bc1)<<endl;
            }
            else if(wc>bc+z){
                wc1 = bc+z;
                cout<<(b*bc)+(w*wc1)<<endl;
                
            }
            else{
                cout<<(b*bc)+(w*wc)<<endl;
            }
        }
    }
    
}

