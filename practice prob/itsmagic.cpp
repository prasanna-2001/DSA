#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,result=-1,temp;
    long int  min = 100000;
    cin>>n;
    long int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    // cout << sum;
    
    for(int i=0; i<n; i++){
        temp = sum - arr[i];
        if(temp%7==0 && min>arr[i]){
            min = arr[i];
            result = i;
        } 
    }
    cout << result;
}