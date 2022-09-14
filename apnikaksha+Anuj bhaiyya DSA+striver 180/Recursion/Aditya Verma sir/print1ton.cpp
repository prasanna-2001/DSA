#include<bits/stdc++.h>
using namespace std; 
void printton(int n){
    if(n<=0){
        return;
    }
    
    printton(n-1);
    cout<<n;
}

int main(){
  int n;
  cin>>n;
  printton(n);
}