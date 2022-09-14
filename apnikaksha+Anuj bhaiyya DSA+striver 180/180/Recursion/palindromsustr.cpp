#include<bits/stdc++.h>
using namespace std; 

string strpali(string str){
    int len= str.length(),max_len=1;
    int start=0,end=0;
    if(len==0 || len==1){
        return 0;
    }
    cout<<"orgujhdh is : " <<str<<" len iss"<<len<<endl;
    if(len%2==0){
        for(int i=0;i<len;i++){
            int l=i, r=i+1;
            while(l>=0 && r<len){
                if(str[l]==str[r]){
                    l--;r++; 
                }
                else{
                    break;
                }
                int lengthstr=r-l-1;
                if(lengthstr>max_len){
                    max_len=lengthstr;
                    start=l+1;
                    end=r-1;
                }
            }
        }
    }
    else{
        for(int i=0;i<len;i++){
            int l=i, r=i;
            while(l>=0 && r<len){
                if(str[l]==str[r]){
                    l--;r++; 
                }
                else{
                    break;
                }
                int lengthstr=r-l-1;
                if(lengthstr>max_len){
                    max_len=lengthstr;
                    start=l+1;
                    end=r-1;
                }
            }
        }
    }
    return str.substr(start,max_len);
}

int main(){
    string str;
    cin>>str;
    cout<<strpali(str);

    
}