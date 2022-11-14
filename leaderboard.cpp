#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int score[n];
	for(int i=0;i<n;i++){
		cin>>score[i];
	}
	
	
	int m;
	cin>>m;
	int player[m];
	for(int j=0;j<m;j++){
		cin>>player[j];
	}
	int rank[n]={};
	int S = 101;
	for(int i=0;i<n;i++){
		
		
		if(i==0){
			rank[i]=1;
			S = score[i];
			continue;
		}
		else if(S>score[i]){
			S=score[i];
			rank[i]= rank[i-1]+1;
				
		}
		else if(S==score[i]){
			S = score[i];
			rank[i]= rank[i-1]; 
		
			
		}
		else{
			continue;
		}	
	}
	int k=0;
	while(m--){
		if(player[k]>=score[0]){
			cout<<rank[0]<<endl;
			k++;
		
		}
		else if(player[k]>score[n-1]){
			n--;
			m++;
		}
		else if (player[k]==score[n-1]){
			cout<<rank[n-1]<<endl;
			k++;
		}
		else{
			cout<<rank[n-1]+1<<endl;
			k++;
		}
		
	}
	return 0;

}
