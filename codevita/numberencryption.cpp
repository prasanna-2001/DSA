#include<bits/stdc++.h>
using namespace std; 
int main(){
  string s1,s2;
  long unsigned int i;
  cin>>s1>>s2;
  int len1 = s1.length();
  int len2 = s2.length();
  int counter=0,temp;
  for(i=0; i<len2; i++){
      if(s2[i]=='R'){
          counter++;
      }
      else if(s2[i]=='L'){
          counter--;
      }
      else if(s2[i]=='T'){
        s1[counter]=s1[counter]+1;
      }
      else if(s2[i]=='D'){
        s1[counter]=s1[counter]-1;
      }
      else if(s2[i]=='S'){
          char p = s2[i+1];
          int j = (int)(p)-48;
          temp = s1[counter];
          s1[counter] = s1[j-1];
          s1[j-1] = temp;
          i++;
      }
      
  }
  cout<<s1;
}