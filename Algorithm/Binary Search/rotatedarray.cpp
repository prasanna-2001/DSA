#include<bits/stdc++.h>
using namespace std; 

int binfound(int arr[],int n,int lb, int ub){
    
    if(lb>ub){
        return -4;
    }
    if(lb==ub){
        return ub;
    }
    int mid=lb+(int(ub-lb)/2);
    // cout<<"mid:"<<mid<<endl<<"ub="<<ub<<endl<<"lb="<<lb<<endl;
    if(arr[mid]<arr[mid-1]){
        return mid;
    }
    if(arr[mid]>arr[0]){
        binfound(arr,n,mid+1,ub);
    }
    else if(arr[mid]<arr[0]){
        binfound(arr,n,lb,mid-1);
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int lb=0,ub=n-1;
    int ans = binfound(arr,n,lb,ub);
    cout<<"Rotated array is "<<ans<<" times right rotated";
} 
