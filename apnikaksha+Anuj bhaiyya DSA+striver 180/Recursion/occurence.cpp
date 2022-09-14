#include<bits/stdc++.h>
using namespace std;


void firstOccurence(int arr[], int n,int key, int i){
    if(i==n){
        cout<<"the element not found"<<endl;
        return;
    }
    if(arr[i]==key){
        cout<<"first occurance :    "<<i;
        return;
    }
    firstOccurence(arr, n, key, i+1);
    
}

int lastoccurence(int arr[], int n, int key, int i){
    // lastoccurence(arr+1, n, key, i+1);
    if(i==n){
        return -1;
    }
    int restarray = lastoccurence(arr, n, key, i+1);
    if(restarray!=-1){
        return  restarray;
    }
    if(arr[i]==key){
       cout<<"lasts occurance :    "<<i;
        return i; 
    }
    // lastoccurence(arr, n, key, i+1);
}
int main(){
    int arr[6]={1,2,3,4,5,3};
    firstOccurence(arr, 6, 3, 0);
    lastoccurence(arr, 6, 3, 0);
}
