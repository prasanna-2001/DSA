// insertion sort just like card you see and bring it to its positn/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
    int key,j;

  for(int i=1; i<n;i++){
    key=a[i];
    j=i;
    while(j>0 && key<a[j-1]){
        a[j] = a[j-1];
        j--;
    }
    a[j]=key;
 
  }
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }
}