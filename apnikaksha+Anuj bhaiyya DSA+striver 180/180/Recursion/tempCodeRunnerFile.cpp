ector<string> subsetsumBruteforce(string s){
  int n = s.length();
  vector<string> ans;
  for(int i=0; i<(1<<n); i++){
    string substr="";
    for(int j=0; j<n; j++){
      if(i&(1<<j)){
        substr += s[i];
      }
    } 
    if(substr.size()>0){
      ans.push_back(substr);
    }
  }
  sort(ans.begin(),ans.end());
  return ans;
}

