/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
    getline(cin,str);
    int n;
    cin>>n;
    int k,count=0,i=0;
    cout<<str<<endl;
    while(n>0){
        k = str.length();
        
        if(k==1 && str[0]=='a'){
            cout<<n<<endl;
            break;
        }
        else if(str[i]=='a'){
            count++;
            
            i++;
            n--;
            
            if(i==k){
                i=0;
            }
        }
        else {
            i++;
            n--;
            continue;    
        }
       
       
        
    }
    cout<<count<<endl;
}*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    long long int n;
    cin>>n;
    int k,count=0,h;
    long long int val;
    k = str.length();
    cout<<k<<"its k"<<endl;
    if(k==n && str[0]=='a'){
        cout<<n<<endl;
        
    }
    else{
        for(int i=0;i<k;i++){
            if(str[i]=='a'){
                count++;
            }
        }
        cout<<"its count"<<count<<endl;
        val=count*n/k;
        cout<<val<<"its val:"<<endl;
        h=n%k;
        
        cout<<"its h: "<<h<<endl;
        for(int i=0;i<h;i++){
            if(str[i]=='a'){
                val++;
            }
            else{
                continue;
            }   
        }
        cout<<val<<endl;
    }        
}

