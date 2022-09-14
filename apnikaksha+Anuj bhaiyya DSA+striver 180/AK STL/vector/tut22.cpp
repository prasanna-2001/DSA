#include<bits/stdc++.h>
using namespace std; 

class Binary{
    string s; //ye privte nhi bola for bhiclass ke membes by defult priate hote hai

    public : 
        void read();
        void check_binary();
        void onse_complement();
};


void Binary :: read(){
    cout<<"ente rthe binary number";
    cin>>s;
}
void Binary :: check_binary(){
    for(int i=0; i<s.length(); i++){
        if(s[i]!='0' && s[i]!='1'){
            cout<<"its not a correct bnary number";
            exit(0);
        }
    }
}

void Binary :: onse_complement(){
    check_binary(); // yaha er objevct ananae ki bh jarurat nhi padi 
    // kuch cases em agar ye function private member hota to apn tabhi bhi nesting ka soche hote
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s[i]='1';
        }
        else if(s.at(i)=='1'){
            s[i]='0';
        }
    }
    cout<<s;
}


int main(){
//classes and object and oops    
    Binary b;
    b.read();
    
    b.onse_complement();
    return 0;

}