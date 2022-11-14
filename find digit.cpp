#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int n;
		cin>>n;
		int count =0, k;
		while(n>0){
			t = n%10;
			
		    if(n%t==0 && t!=0){
				count++;
			} 
			else{
				continue;
			}
			n= n/10;
		}
		cout<<count<<endl;
		
	}
}






//codingbroz
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int getR(string n, int q) {
    if(!q) return 0;
    int r = 0;
    for(int i = 0;i < n.length();++i) {
        r *= 10;
        r += (n[i] - '0');
        r %= q;
    }
    if(!r) return 1;
    return 0;
}


int main() { 
    int T;
    string n;
    int res = 0;
    
    cin >> T;
    while(T--) {
        cin >> n;
        
        res = 0;
        for(int i = 0;i < n.length();++i)
            res += getR(n, n[i] - '0');
        
        cout << res << endl;
    }
    
    return 0;
}
