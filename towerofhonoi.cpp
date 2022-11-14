#include<iostream>

using namespace std;
int count=0;
int toh(int n,int from,int to,int aux){
	
	if(n==0){
		
		return count;
	}
	count++;
	toh(n-1,from,aux,to);
	cout<<"disk "<<n <<" move from "<<from<<" to  "<<to<<endl;;
	toh(n-1,aux,to,from);
	
}
int main(){
	int n;
	cin>>n;
	cout<<toh(n,1,3,2);
	
}
