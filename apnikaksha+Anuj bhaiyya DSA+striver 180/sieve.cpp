#include<bits/stdc++.h>
using namespace std; 
void sievealgo(int n){
int prime[1000]={0};
for(int i=2; i<=n; i++){
    if(prime[i]==0){
        for(int j=i*i; j<=n; j=j+i){
            prime[j]=1;
        }
    }
}

for(int i=0; i<=n; i++){
    if(prime[i]==0){
        cout<<i<<" ";
    }
}
}
int main(){

 int n;
 cin>>n;
 sievealgo(n); 
}