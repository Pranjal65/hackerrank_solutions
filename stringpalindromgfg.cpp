#include<iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	int n= str.length();
	cout<<"length of str is : "<<n<<endl;
        int i=(n/2)-1;
        int j=(n/2)-1;
        while(i>=0 &&j<n){
            if(str[i]==str[j]){                              
            	i--;
            	j++;   
            }    
        }
        if(i==-1){
        	cout<<"in if"<<n-j<<endl;
		}
		else{
			cout<<"in else"<<i+1<<endl;
		}
}
