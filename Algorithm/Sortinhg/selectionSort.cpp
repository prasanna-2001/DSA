// ibring smallest to front and increase sorted counter

#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
//   int ctr=0;
  for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1; j<n;j++){
        if(a[min]>a[j]){
            min=j;
        }
    }
    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }
}