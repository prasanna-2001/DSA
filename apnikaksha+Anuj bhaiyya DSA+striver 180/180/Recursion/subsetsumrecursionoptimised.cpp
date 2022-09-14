#include<bits/stdc++.h>
using namespace std; 

void funct(int index, int sum, vector<int> &arr, int n, vector<int> &subset){
    //base case
    if(index == n){
        subset.push_back(sum);
        return;
    }
    funct(index + 1, sum + arr[index], arr, n, subset);
    funct(index + 1, sum, arr, n, subset);
}

int main(){
  int sum=0, index = 0;
  vector<int> arr;
  arr.push_back(3);
  arr.push_back(1);
  arr.push_back(2);
// for(auto element:subset){
//       cout<<element;
//   }
  vector<int> subset;
  funct(index,sum,arr,3,subset); ///3 ia size of vector
  sort(subset.begin(),subset.end());
  for(auto element:subset){
      cout<<element;
  }
}

//done bc
///classs wala solution gfg per kiya hai and video me hai

//one ,ore try
// #include<bits/stdc++.h>
// using namespace std; 

// void functi(int index, int sum, vector<int> &arr, int N, vector<int> &subset){
//   if(index == N){
//     subset.push_back(sum);
//     return;
//   }
//   functi(index+1, sum+arr[index], arr, N, subset);
//   functi(index+1, sum, arr, N, subset);

// }
// int main(){
//   vector<int> arr;
//   int index=0, sum=0;
//   // arr.push_back(4);
//   arr.push_back(3);
//   arr.push_back(2);
//   arr.push_back(1);
//   vector<int> subset;
//   functi(index, sum, arr, 3, subset);

//   sort(subset.begin(), subset.end());
//   for(auto element : subset){
//     cout<<element<<endl;
//   }

// }