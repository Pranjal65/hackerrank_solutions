#include<iostream>
using namespace std;
int main(){
	int p,q;
	cin>>p>>q;
	int d=1;
	if(p&&q<100){
		d=2;
	}
	else if(p&&q<1000){
		d=3;
	}
	else if(p&&q<10000){
		d=4;
	}
	else{
		d=5;
	}
	for(int i=p;i<=q;i++){
		
	}
}
