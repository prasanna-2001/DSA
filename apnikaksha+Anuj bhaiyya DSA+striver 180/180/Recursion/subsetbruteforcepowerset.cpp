#include<bits/stdc++.h>
using namespace std; 

// bruteforce
vector<string> subsetsumBruteforce(string s){
    int n=s.length();
    vector<string> ans;
    for(int num=0; num<(1<<n); num++){
      string substr = "";
      for(int i=0; i<n; i++){
        if(num&(1<<i)){
          substr += s[i]; 
        }
      }
      if(substr.size() >= 0)
        ans.push_back(substr);
    }
    sort(ans.begin(), ans.end()); 
    return ans; 
}
// vector<string> subsetsumBruteforce(string s){
  // int n = s.length();
//   vector<string> ans;
//   for(int i=0; i<(1<<n); i++){
//     string substr="";
//     for(int j=0; j<n; j++){
//       if(i&(1<<j)){
//         substr += s[i];
//       }
//     } 
//     if(substr.size()>0){
//       ans.push_back(substr);
//     }
//   }
//   sort(ans.begin(),ans.end());
//   return ans;
// }


//optimised by recursion

int main(){
  vector <string> v;
  string s;
  cin>>s;
  v = subsetsumBruteforce(s);
  // for(int i=0; i<n; i++){
  //     cout<< arr[i];
  // }
  for(auto element:v){
    cout<<element<<" " <<endl;
}
}