#include<bits/stdc++.h>
using namespace std; 

void reverseString(string s1){
    
    if(s1.length()==0){
        return;
    }   
    string ros = s1.substr(1);

    reverseString(ros);
    
    
    
    cout<<s1[0];
    // int num =3;
    // s1.append(s2);
    //     cout<<s1[num];
    // char c = s1[iterator];
    // char s = str;
    // cout<<str;
    // s2 += c;
    // s2.append(str);
    // string str = s1[iterator];
    // s2.append(str);
    // if(iterator>=0){
    //     return s2 + reverseString(s1, iterator-1, s2);
    // }

}

//re
// void reverseString(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros = s.substr(1);
//     reverseString(ros);
//     cout<<s[0];
// }

int main(){
    string s1; //= "prasanna";
    // string s2 = "";
    cout<<"enter a string"; 
    cin>>s1;
    // cout<<s1.substr(3)<<"\n";
    // int iterator = s1.length()-1;
    reverseString(s1);
    
}





// void reverse(string str){
//     if(str.length()==0){ //base case
//         return ;
//     }
//     string ros = str.sub 
// }