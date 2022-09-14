// gaalat hua haoi solurtion


#include<bits/stdc++.h>
using namespace std; 

int binaryserach(int n, int arr[], int key,int lb, int ub){
    if(lb>ub){
        return -1;
    }
    int mid=lb+((ub-lb)/2);
    if(arr[mid]==key){
        // cout<<"a";
        return mid;
    }
    if(arr[mid]>key){
        // cout<<"b";
        binaryserach(n,arr,key,lb,mid-1);
    }
    if(arr[mid]<key){
        // cout<<"C";
        binaryserach(n,arr,key,mid+1,ub);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int lb=0,ub=n-1;
    int ans=binaryserach(n,arr,key,lb,ub);
    if(ans==-1){
        cout<<"\nelement is not there\n";
    }    
    else{
        cout<<"\nelement found at index "<< ans <<"that is posion "<<ans+1<<".\n";
    }
}














        // res=mid;
        // cout<<"d";
        // binaryserach(n,arr,key,lb,mid-1);
    