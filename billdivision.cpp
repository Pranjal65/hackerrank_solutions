# include <iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int Bcharge;
	cin>>Bcharge;
	int bill[n];
	for(int i=0;i<n;i++){
		cin>>bill[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=bill[i];
	}
	cout<<sum;
	int Bact;
	Bact=(sum-bill[k])/2;
	cout<<Bact;
	
	int m = Bcharge - Bact;
	if(m==0){
		cout<<"Bon Appetit";
	}
	else{
		cout<<m;
	}
	
}
