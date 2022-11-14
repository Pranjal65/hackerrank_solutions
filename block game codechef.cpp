#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int p;
        cin>>p;
        int count=0;
        vector<int>arr;
        while(p>0){
            arr.push_back(p%10); 
            p=p/10;
            count++;
        }
      //  int n=sizeof(arr);
        int flag=0;
        for(int i=0;i<count;i++){
            if(arr[i]!=arr[count-1-i]){
            	flag++;
			}
			else{
				continue;
			}
        }
        if(flag>0){
        	cout<<"lose"<<endl;
		}
		else{
			cout<<"win"<<endl;
		}
       
    }
	// your code goes here
	return 0;
}

