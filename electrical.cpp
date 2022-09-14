#include<bits/stdc++.h>
using namespace std; 
int main(){
 int ip,a[10];
 cin>>ip;
 int temp=ip,count=0;
 for(int i=0; temp>0; i++){
    a[i]=temp%2;
    temp=temp/2;
    count++;
 }
  for(int i=0; i<count; i++){
    cout<<a[i];
  }
  cout<<"\n";
  int msb,lsb,nsb=0,ctr=0;
    for(int i=count-1; i>=0; i++){
        if(a[i]==1){
            nsb++;
            if(ctr==0){
                lsb=count-i-1;
            }
            msb=i;
            cout<<msb<<lsb<<nsb;
        }
    }
    cout<<nsb<<msb<<lsb;
}
