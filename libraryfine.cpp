

#include <iostream>

using namespace std;
int main() {
    int d1,d2,m1,m2,y1,y2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    if((d1==d2 && m1==m2 ) && y1==y2){
        cout<<"0"<<"in equal"<<endl;
    }
    else if(d1>d2 && m1==m2 && y1==y1){
        cout<<(d1-d2)*15<<"in day"<<endl;
    }
    else if( y1==y2 && m1>m2){
        cout<<(m1-m2)*500<<"in month"<<endl;
    }
    else if(y1>y2){
        cout<<"10,000"<<"in year"<<endl;
    }
    else if(y1%10==0 && y1<y2){
    	cout<<"10000"<<endl;
	}
    else{
        cout<<"0"<<"in else"<<endl;
    }
   
    
}
