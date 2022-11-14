# include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;s
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    
    
    float p=0,q=0,z=0;
    for (int i =0;i<n;i++){
        if (array[i]>0){
            p++;
            
        }
        else if (array[i]<0){
            q++;
            
        }
        else if (array[i]==0){
            z++;
            
        }
    }
    
    cout<<(p/n)<<endl;
    cout<<(q/n)<<endl;
    cout<<(z/n)<<endl;
}
