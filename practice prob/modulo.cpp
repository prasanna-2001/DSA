#include<bits/stdc++.h>
using namespace std;
int main(){
    long int N, mul=1, mod;
    cin >> N;
    int a[N];
    for(int i=0; i<N; ++i){
        cin >> a[i];
    }
    for(int i=0; i<N; ++i){
        mul= (mul* a[i])%((10*10*10*10*10*10*10*10*10)+7);
    }
    cout << mul;
    
}