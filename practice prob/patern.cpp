#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	int C;
	int T;
	cin>>T;
	while(T--){
		cin>>N;
		C=2*N;
		for(int i=1;i<=N;i++){
			for(int j=1; j<=i; j++){
				cout<<"*";
			}

			for(int k=i+1;k<C-i+1;k++)
				cout<<"#";

			for(int j=1;j<i+1;j++){
				cout<<"*";
 
			}
			cout<<endl;
			
		}
 
	}
}