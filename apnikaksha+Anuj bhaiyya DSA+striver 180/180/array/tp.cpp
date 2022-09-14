#include<bits/stdc++.h>
using namespace std; 

// solve(vector<int> &A, int B) {
//     int count=0,len,sum=0;
//     len=A.size();
//     int start=0, end=len-1;
  
//     while(count<B){
//         if(A[start]>A[end]){
//             sum=sum+A[start];
//             cout<<"elemnt "<<A[start]<<endl;
//             cout<<"sum"<<sum<<endl;
//             start++;
//         }
//         else{
//             sum=sum+A[end];
//             cout<<"elemnt "<<A[end]<<endl;
//             cout<<"sum"<<sum<<endl;
//             end--;
//         }
//         count++;
//     }
//     cout<<sum;
// }

int main(){
    
  // v.push_back(5);
  // v.push_back(-2);
  // v.push_back(3);
//   v.push_back(1);
//   v.push_back(2);
//   int b=1;
//   solve(v,b);
int numRows=5;
vector<vector<int>> v(5);
        for(int i=0; i<numRows; i++){
            for(int j=0; j<i; j++){
                v[i].push_back(1);
            }
        }
        
        for(int i=2; i<numRows;i++){
           for(int j=1; j<v[i].size()-1; j++){
                v[i][j] = v[i-1][j-1]+v[i-1][j];
           } 
        }

for(int i=0; i<v.size(); i++){
    for(int j=0; j<v[i].size(); j++){
        cout<<v[i][j]<<" ";
    }
}
}