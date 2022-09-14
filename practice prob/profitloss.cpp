#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,min_till_now=100000, best_profit=0;
    cout << "enter tge number of days"<< endl;
    cin>>n;
    int prices[n];
    for(int i =0; i<n; ++i){
        cin>> prices[i];
    }
    for(int i =0; i<n; ++i){
        if(min_till_now>prices[i]){
            min_till_now=prices[i];
        }
        if(best_profit<prices[i]-min_till_now){
            best_profit = prices[i]-min_till_now;
        }
    cout << best_profit << endl;
    }

}