#include<bits/stdc++.h>
using namespace std; 

int x = 2;



int main(){
  int x = 3;
  {
    int x = 4;
    cout<<x;
  }
  cout<<x;
  cout<< ::x;
  return 0;
}