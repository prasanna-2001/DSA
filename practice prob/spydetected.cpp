#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t,x;
    int a;
    
    cin >> t;
    while(t--){
        
        cin >> a;
        int b[a];
        for(int i=0; i<a; i++){
            cin >> b[i];
        }
        if(b[0]==b[1]){
            x=b[1];
        }
        else{
            x=b[2];
        }
        for(int j=0; j<a; j++){
            if(b[j]!=x){
                cout<<j+1<<endl;
            }
        }

    }
}