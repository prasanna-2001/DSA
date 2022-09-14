#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t,n,m,k,res=0;
    cin >> t;
    while(t--){
        cin>>n;
        cin>>m;
        cin>>k;
        for(int i=0;i<m;i++){
            res = res + k + 1;
        }
        cout << res ;
    }
}