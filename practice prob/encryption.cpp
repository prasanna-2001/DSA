#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;

    int n;

    cin>>s;

    cin>>n;

    for(int i=0;i<s.size();i++){

        if(s[i]>='A' && s[i]<='Z'){

            s[i]='A'+(s[i]-'A'+n)%26;

        }
        else if(s[i]>='a' && s[i]<='z'){

            s[i]='a'+(s[i]-'a'+n)%26;

        }
        else if(s[i]>='0' && s[i]<='9'){

            s[i]='0'+(s[i]-'0'+n)%10;

        }

    }

    cout<<s;

    return 0;

}

