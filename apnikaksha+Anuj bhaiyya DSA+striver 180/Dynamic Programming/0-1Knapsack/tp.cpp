#include<bits/stdc++.h>
using namespace std; 
int t[102][1002];

int knapsack(int wt[], int val[], int w, int n){
  if(n==0 || w==0){
    return 0;    
  }
  if(t[n][w] != -1){
    return t[n][w];
  }
  if(wt[n-1]<=w){
    return t[n][w] = max(val[n-1]+knapsack(wt, val,w-wt[n-1],n-1), knapsack(wt, val, w, n-1));
  }
  else if(wt[n-1]>w){
    return t[n][w] = knapsack(wt, val, w, n-1);
  }
  
}

int main(){
    int wt[4] = {1,4,2,5};
    int val[4] = {5,3,5,6};
    int n=4, w=7;
    memset(t,-1,sizeof(t));
    cout<<knapsack(wt, val, w, n);
}