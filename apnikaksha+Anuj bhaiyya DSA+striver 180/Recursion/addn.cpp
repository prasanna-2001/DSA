// #include<bits/stdc++.h>
// using namespace std;
// int sunOfN(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sunOfN(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n";
//     cin>>n;
//     cout<<"the sum is"<<sunOfN(n);
// }



#include<bits/stdc++.h>
using namespace std; 
int addN(int n){
    if(n==1){
        return 1;
    }
    return(n+addN(n-1));
}
int main(){
  int n;
  cin>>n;
  cout<<addN(n);
}