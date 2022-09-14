#include<bits/stdc++.h>
using namespace std;


void printdecreasing(int n){
    cout << n<< " ";
    // if (n>0){
    //     printdecreasing(n-1);
    // }
    // else{
    //     return;
    // }
    if(n==0){
        return;
    }
    printdecreasing(n-1);
}

void printinreasing(int n){
    if(n==0){
        cout <<"0"<< " ";
        return;
    }
    printinreasing(n-1);
    
    cout<< n << " ";    
}

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    printdecreasing(n);
    cout<<endl;
    printinreasing(n);
}