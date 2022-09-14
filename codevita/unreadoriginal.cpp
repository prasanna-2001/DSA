#include<bits/stdc++.h>
using namespace std; 

int retcount(int n){
  int i,flag=0,count,answer=0; 
  while(n>1){
      count=0;
      answer++;
      for(i=2;i<=n;i++){
        for(int j=2; j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }

        }
       if(flag==0){
          count++;
       }
      }
  n=n-count;
  }
  return answer;
}

int main(){
  int n,ans;
  cin>>n;
  if(n==1){
      cout<<0;
  }
  else{
      ans=retcount(n);
      cout<<ans;
  }
  
}