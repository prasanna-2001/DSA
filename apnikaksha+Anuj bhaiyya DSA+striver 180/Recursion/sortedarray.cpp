#include<bits/stdc++.h>
using namespace std;


bool sorted(int arr[], int n){

    if(n==1){
        return true;
    }
    bool restofarray = sorted(arr+1, n-1);
    return arr[0]<arr[1] && restofarray;
        
}
int main(){
    int arr[] ={1,2,3,4};
    // int l = arr.length())
    cout<<sorted(arr,4 );

}