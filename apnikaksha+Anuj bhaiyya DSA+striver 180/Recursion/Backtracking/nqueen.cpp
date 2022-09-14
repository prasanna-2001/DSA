#include<bits/stdc++.h>
using namespace std; 
int main(){
    int len,max,halve,flag=0,count=0;
    cin>>len;
    halve=len/2;
    int arr[len];
    for(int i=0; i<len-1; i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<=len-1;i++){
        for(int j=0; j<len-1;j++){
            if(arr[j]==arr[i]){
                count=count+1;
            }
        }
        if(count>=halve){
                cout<<arr[i]<<" is a max element";
                flag=1; 
            }
    }
    if(flag==0){
        cout<<"there is no max element";
    }
  
}