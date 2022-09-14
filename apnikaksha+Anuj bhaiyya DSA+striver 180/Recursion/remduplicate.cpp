#include<bits/stdc++.h>
using namespace std; 

// my try ==>> sucessssssssssssssss  but fails when the letterrs 
//repeated after some letter like here "s" in sbdvbsvvvvvvvvvvvvvdd  
//WAISE WO CHEEJ NEEECHE WALE ME BHI HO RAHI HAI
void remduplicate(string s1, char s2,int n){
    if(s1.length()==0){
        return;
    }
    if(s1.length()==n){
        cout<<s1[0];
    }
    if(s1[0]!=s2){
        cout<<s1[0];
    }
    remduplicate(s1.substr(1), s1[0], n);
}
int main(){
  string s1 = "spppdddffffggggbbbbww";
  char s2 = s1[0];
  int len = s1.length();
  remduplicate(s1,s2, len);
}


//givn soln  

// string remDuplicate(string s){
//     if(s.length()==0){
//         return "";
//     }

//     char ch = s[0];
//     string ans = remDuplicate(s.substr(1));
//     if(ch == ans[0]){
//         return ans;
//     }
//     else{
//         return (ch +ans);
//     }

// }
// int main(){
//   cout<<remDuplicate("sbdvbsvvvvvvvvvvvvvdd");
//   return 0;
// }