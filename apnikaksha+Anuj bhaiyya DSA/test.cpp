#include<bits/stdc++.h>
using namespace std; 
int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    int arr[n+1];
    for(int i=0; i<n+1; i++){
        arr[i]=0;
    }
    for(int i=0; i<array.size(); i++){
        int test = array[i];
        arr[test]=1;
    }
    for(int i=1; i<n+1; i++){
        if(arr[i]==0){
            return i;
        }
    }
}
int main(){
  vector<int> v;
  int n=5;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(5);
  int x = MissingNumber(v, n);
  cout<<x;
}
