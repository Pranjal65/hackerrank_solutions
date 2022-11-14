#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int q;
    cin>>q;
    for(int j=0; j<q;j++){
        int a,b,i,h;
        cin>>a>>b;
        int count=0;
        h= sqrt(a);
        i = sqrt(b);
        for(int k=a;k<=b;k++){
            for(int j=h;j<=i;j++){
            	if(sqrt(k)==h){
                    cout<<i-h<<endl;
                    break;
                } 
                else if(sqrt(k)==j){
                    count++;
                    k=(j+1)*(j+1);
                }
                else{
                    continue;
                }
            }
            //cout<<k<<endl;
            
        }
        cout<<count<<endl;
       
    }



}
