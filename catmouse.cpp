#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t;i++){
		int x,y,z;
		cin>>x>>y>>z;
		cout<<abs(x-z)<<"   "<<abs(y-z)<<endl;
		if(abs(x-z)==abs(y-z)){
			cout<<"Mouse C"<<endl;
		}
		else if(abs(x-z)<abs(y-z)){
			cout<<" Cat A"<<endl;
		}
		else{
			cout<<"Cat B"<<endl;
		}
	}
}
