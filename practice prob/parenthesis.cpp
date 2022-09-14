#include<bits/stdc++.h>
using namespace std;
main(){
    int j,i;
    int flag=0;
    string s;
    cin>>s;
    cout << s.length();
    j=s.length()/2;
    if(s.length()%2 != 0){
        cout<<"False";
        return 0;
    }
    else{
        for(int i = 0; i<j; i++){
            if(s[i]==s[j+1]){
                flag=0;
            }
            else{
                flag=1;
                break;
            }
            break;
            
        }
        if(flag==0){
            cout<<"False";
        }
        else{
            cout<<"True";
        }
    }
}