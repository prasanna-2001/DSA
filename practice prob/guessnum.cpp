#include<bits/stdc++.h>
using namespace std;
int half;
int find(int n){
    int res;
    half=n/2;
    while(half--){
        res=n%half;
        if(res==0){
            cout<<half;
        }
    }
}
int main(){
    int t,n,f;
    cin>>t;
    while(t--){
        cin >> n ;
        find(n);
    }
}