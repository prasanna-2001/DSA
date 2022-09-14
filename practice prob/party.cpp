#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0, k[n],a,b,res;
    cin>>n;
    for(int i;i<n;i++){
        cin>>k[i];
    }
    for(int i;i<n;i++){
        sum = sum+k[i];
    }
    a=sum/4;
    b=sum%a;
    if(b==0){
        res=a;
    }
    if(b!=0){
        res=a+1;
    }
    cout<<res;
}