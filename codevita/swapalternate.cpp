#include<bits/stdc++.h>
using namespace std; 
swapandret(string str){
    char temp;
    int len = str.length();
    cout<<len<<endl; // to check function working
    int g_even=0, g_odd=0;
    for(int i=0; i<len; i++){
        if((i+1)%2==0){
            if(str[i]=='g'){
                g_even++;
            }
        }
        else{
            if(str[i]=='g'){
                g_odd++;
            }
        }
    }
    cout<<g_even<<g_odd<<endl; //to check odd even
    if(g_even>g_odd){
        for(int i=0; i<len; i++){
            if((i+1)%2 != 0){
                if(str[i]=='g'){
                    for(int j=0; j<len; j++){
                        if((j+1)%2==0){
                            if(str[i]=='b'){
                                temp = str[i];
                                str[i]=str[j];
                                str[j]=temp;
                                break;
                            }
                         }
                    }
                }
            }
        }
        cout<<str;
    }
    else{
        for(int i=0; i<len; i++){
            if((i+1)%2 == 0){
                if(str[i]=='g'){
                    for(int j=0; j<len; j++){
                        if((j+1)%2 !=0){
                            if(str[i]=='b'){
                                temp = str[i];
                                str[i]=str[j];
                                str[j]=temp;
                                break;
                            }
                         }
                    }
                }
            }
        }
        cout<<str;
    }

}
int main(){
 string str;
 cin>>str;
 swapandret(str);
 return 0;
}