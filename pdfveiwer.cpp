#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int a[26];
	for(int i=0;i<26;i++){
		cin>>a[i];
	}
	string word;
    cin>>word;
	int n = word.length();
	cout<<n<<endl;
	
	char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int arr[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<26;j++){
			if(word[i]=alph[j]){
			
		        arr[i]=a[j];
				cout<<"hiii"<<endl;
	
			}
			else{
				continue;
			}
		}
	}
	int max = 0;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max =arr[i];
			cout<<max<<"  heyy"<<endl;
		}
		else{
			continue;
		}
	}
	cout<<"max is:"<<max<<"and n:"<<n<<endl;
	cout<<max*n;
	
	
}
