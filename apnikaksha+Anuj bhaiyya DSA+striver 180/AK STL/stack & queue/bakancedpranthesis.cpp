#include<bits/stdc++.h>
using namespace std; 
int main(){
    int count=0;
    string s="()()";
    cout<<s.length();
    stack<char> st;
    st.push(s[0]);
//   cout<<st.top();
    for(int i=1; i<s.length();i++){
        cout<<"s : "<<s[i]<<endl;
        cout<<"top"<<st.top()<<endl;
        if(st.empty() && s[i]=='('){
            st.push('(');
            cout<<"pushed"<<endl;
        }
        if(st.empty() && s[i]==')'){
            cout<<"noytbal";
            return 0;
        }
        if(s[i]!=st.top()){
            st.pop();
            cout<<"popped"<<endl;
        }
        else{
            st.push(s[i]);
            cout<<"pusshed"<<endl;
        }
        count++;
    }
    cout<<count<<endl;
    if(st.empty()){
        cout<<"balancesd";
    }
    else{
        cout<<"not bala";
    }
}