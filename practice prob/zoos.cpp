#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    float countz = 0,counto = 0;
    cin >> str;
    if(str[0]!='z'){
        cout<<"No";
    }
    for(int i=0 ;i<str.length(); i++){
        if(str[i]=='z'){
            countz++;
        }
        else{
            counto++;
        }
    }
    // cout << countz<<endl;
    // cout << counto<<endl;
    // cout<<counto/2;
    if(counto/2 == countz){
        cout << "Yes";       
    }
    else{
        cout<<"No";
    }
}