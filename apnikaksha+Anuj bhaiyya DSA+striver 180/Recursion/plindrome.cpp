#include<bits/stdc++.h>
using namespace std;



// int isPalindrome(string s, int l,int r){
//     if(l>=r){
//         return 1;
//     }
//     if(s[l] != s[r]){
//         return 0;
//     }
//     return isPalindrome(s, l+1, r-1);
// }

//re
int palindromeOrnot(string s, int l,  int r){
    if(l>r){
        return 1;
    }
    if(s[l]!=s[r]){
        return 0;
    }
    return(palindromeOrnot(s, l+1, r-1));

}
int main(){
    string s;
    cout<<"enter string";
    cin >>s;
    int r = s.length()-1;
    int l = 0;
    // int ans = isPalindrome(s,l,r);
    int ans = palindromeOrnot(s,l,r);

    cout << ans;

}