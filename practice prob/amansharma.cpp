#include<bits/stdc++.h>
using namespace std;
int pi = (22/7);
int main(){
    int d;
    cin >> d;
    int m,x,r,T;
    double c;
    while(d--){
        cin >> r >> x;
        m = 100 * x;
        c=2.0*(22.0/7)*r;
        if(m>=c){
            T++;
        }
    }
    cout << T;
    return 0;

}