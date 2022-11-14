#include <iostream>
using namespace std;

int main(){
	int p,q,r,s;
	cin>>p>>q>>r>>s;
	int count1=p,count2=r;
	
	while(1){
		count1+=q;
		count2+=s;
		
		if( s>q|| (r-p)%(s-q)){
			cout<<"No";
			break;
		}
		else if(count1==count2){
			cout<<"Yes"<<endl;
			break;
			
		}
	    
		else {
			continue;
		}
   
	}
	
	return 0;
}
