#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    int N;
    int M; 
    cin >> T;
    while(T--){
        cin >> N >>M;
        if(M%N==0){
            cout << "YES"<<endl;
        }
        else{
            cout<< "NO"<<endl;
        }
    }
}