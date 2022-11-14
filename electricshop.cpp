# include<iostream>
using namespace std;

int main(){
    long long int b,n,m;
    cin>>b>>n>>m;
    long long int keyboard[n];
    for(int i=0;i<n;i++){
        cin>>keyboard[i];
    }
    long long int drives[m];
    for(int i=0;i<m;i++){
        cin>>drives[i];
    }
    long long int maxsum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            long long int sum = keyboard[i] + drives[j];
            if(sum<=b){
                if(maxsum<sum){
                    maxsum=sum;
                
                }
            }     
        }
    }
    if(maxsum==0){
        cout<<"-1";
    }
    else if(maxsum== b){
        cout<<b;
    }
    else if( b>maxsum){
        cout<<maxsum;
    }
    
}
