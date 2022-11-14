#include<iostream>

using namespace std;

void toh(int n,int from,int to,int aux){
	if(n==0){
		return;
	}
	toh(n-1,from,aux,to);
	cout<<"disk move from"<<from<<"to  "<<to;
	toh(n-1,aux,to,from);
}
int main(){
	int n;
	cin>>n;
	toh(n,1,3,2);
	
}
