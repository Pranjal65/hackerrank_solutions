#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s,h;
        cin>>s>>h;
        int n= s.length();
        int m=h.length();
        if(n>m){
            for(int i=0;i<n;i++){
                if(i<=m){
                    if(s[i]==h[i]){
                        cout<<"G";
                    }
                    else{
                        cout<<"B";
                    }
                }
                cout<<"B";
            }
        }
        else if(m>n){
            for(int i=0;i<m;i++){
                if(i<=n){
                    if(s[i]==h[i]){
                        cout<<"G";
                    }
                    else{
                    cout<<"B";
                    }
                }
                cout<<"B";
            }
            
        }
        else{
           for(int i=0;i<n;i++){
                if(s[i]==h[i]){
                   cout<<"G";
                }
                else{
                    cout<<"B";
                }
           }
        } 
        cout<<endl;
        
    }
	// your code goes here
	return 0;
}

