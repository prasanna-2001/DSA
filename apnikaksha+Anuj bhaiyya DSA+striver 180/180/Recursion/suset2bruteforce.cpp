#include<bits/stdc++.h>
using namespace std; 
void funct(vector<string> &input, int len, vector<string> &emptyst){
  int flag =0;
  for(int num=0; num<(1<<len); num++){
    string substring = "";
    for(int i = 0; i<len; i++){
      if(num & (1<<i)){
        substring += input[i]; 
      }
    }
    if(substring.size() >= 0){
      flag=0;
      for(int j=0; j<emptyst.size(); j++){
        if(substring == input[j]){
          flag=1;
          break;
        }
      }
      if(flag==0){
        emptyst.push_back(substring);
      }
    }
        
  }
}
int main(){
  vector<string> input;
  int len = 3;
  input.push_back("1");
  input.push_back("2");
  input.push_back("2");
  vector<string> emptyst;
  funct(input, len, emptyst);
  for(auto element: emptyst){
    cout<< element<<" ";
  }
}