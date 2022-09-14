#include<bits/stdc++.h>
using namespace std;

// int powerOf(int a,int n){
//     if(n==0){
//         return 1;
//     }
//     if(n==1){
//         return a;
//     }
//     return(a*powerOf(a,n-1));
// }

//re
int powerOf(int a, int n ){
    if(n==0){
        return 1;
    }
    if(n==1){
        return a;
    }
    return(a*powerOf(a,n-1));

}
int main(){
    int a,n;
    cout<<"enter the base"<<endl;
    cin>>a;
    cout<<"enter the power"<<endl;
    cin>>n;
    cout<<"the power is"<<powerOf(a,n);
    return 0;
}