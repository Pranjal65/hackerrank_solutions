#include<iostream>
using namespace std;

int main(){
	int p ,d,m,s;
	cin>>p>>d>>m>>s;
	int sum = 0 ;
	int k=p;
	int count=0;
    while(sum<s){
    	if( k>m){
    		sum = sum +k;
		}
		else{
			sum = sum +m;
		}
    	
    	cout<<sum<<"      "<<k<<endl;
    	if(sum<=s){
    		count++;
		}
		else{
			break;
		}
    	k=k-d;
	}
	cout<<count+1<<endl;
}
