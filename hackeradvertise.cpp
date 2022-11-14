#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int rec=5;
	int like=2;
	for(int j=1;j<n;j++){
		rec= (rec/2) *3;
		like=like + rec/2;	
	}
	cout<<like<<endl;
	
}
