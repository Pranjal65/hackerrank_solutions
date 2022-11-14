/*#include<iostream>
#include<climits>
using namespace std;

int main(){
	int t,k=3,j=1,s;
	cin>>t;
	int i=2;
	for( i=2;i<=t;i++){
		
		cout<<"its i in for:"<<i<<endl;
		k = k*j;
		cout<<k<<"its k"<<endl;
		s = k;
		cout<<s<<"its s"<<endl;		
		while(s>0){
			cout<<s<<"its s in while"<<endl;
			if(i==t){
				cout<<s<<"heloooo"<<endl;
				s--;
				break;
			}
			else{
				i++;
				s--;
				cout<<"hiii"<<endl;	
			}
			
			cout<<j<<"its j"<<endl;
			if(j<=2){
				j=2;
				
			}
			else{
				j++;
			}
			
		}
		
	}
	
}*/

#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	long long int count;
	while(t>count){
		t=t-count;
		count=count*2;
	}
	cout<<count-t+1<<endl;
}
