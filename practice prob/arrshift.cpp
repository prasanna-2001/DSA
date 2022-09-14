#include<bits/stdc++.h>
using namespace std;
int x;
int main(){
    int n, d;
    cin >> n >> d;
    int a[n+d];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    for(int j=0; j<d; j++){
        a[n+j]=a[j];
    }
    for(int i=d; i<n+d; i++){
        cout << a[i] << " ";
    }
}