#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M=0,P=0;
    cin >> N;
    int count = 1;
    while(N>0){
        P = P + count;
        M = M + (count*2);
        N = N - (P+M);
    }  
    if(M==0){
        cout<<"Patlu"<<endl;
    }
    else{
        cout << "Motu"<<endl;
    }
}