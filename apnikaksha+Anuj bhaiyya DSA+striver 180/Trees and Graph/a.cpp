#include<bits/stdc++.h>
using namespace std; 

int getPairsCount(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        // 
        
        int l=0,r=n-1;
        int count=0,sum;
        while(l<r){
            if(arr[l]+arr[r]==k){
                count++; 
                
            }
            if(arr[l]+arr[r]<k){
                l++;
            }
            if(arr[l]+arr[r]>k){
                r--;
            }
        }
        
        return count;

}
int main(){
    int n = 7,k=6;
    int arr[]={1,5,7,1,1,4,2};
    cout<<getPairsCount(arr,n,k);
}

