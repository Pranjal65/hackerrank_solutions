#include<iostream>
using namespace std;

int main(){
	const int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int count[5]={0};
	
	for(int i=0;i<n;i++){
		for(int j=1;j<=5;j++){
			if( arr[i]==j){
				count[j]+=1;	
			}
			else{
				continue;
			}
		}
	}
	
	
	int max=0;
	for(int i=0;i<5;i++){
	
		if(max<count[i]){
			max=count[i];
			
		}
	}
	
	for(int i=0;i<5;i++){
		if(count[i]==max){
			cout<<i;
			break;
		}
	}
	

	

}



//another solution
/*#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5+10;
int N,A[10];
int main()
{
    cin >> N;
    for (int i=1,x; i <= N; i++) cin >> x, A[x]++;
    int ans = 1;
    for (int i=2; i <= 5; i++)
        if (A[i] > A[ans]) ans = i;
    cout << ans;
}*/
