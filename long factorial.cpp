#include<iostream>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}
	long long int prevfact = fact(n-1);
	return n*prevfact;
}
int main(){
	long long int n;
	cin>>n;
	cout<<fact(n)<<endl;
}
