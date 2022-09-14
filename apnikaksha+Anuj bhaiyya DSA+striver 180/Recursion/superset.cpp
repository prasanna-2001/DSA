#include<bits/stdc++.h>
using namespace std;

bool sortedArray(int arr[], int n){
    if(n==1){
        return true;
    }
    bool nextarr = sortedArray(arr+1, n-1);
    return (arr[0]<arr[1] && nextarr);
}

int main(){
    int arr[10]={1,2,3,4,5,6};
    cout <<sortedArray(arr, 6);
}