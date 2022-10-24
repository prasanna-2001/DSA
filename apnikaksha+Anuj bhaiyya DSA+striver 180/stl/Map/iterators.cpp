#include<bits/stdc++.h>
using namespace std; 
int main(){
    vector<int> v={2,3,5,6,7};
    //normal iterator
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i];
    // }
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<" ";
    }
cout<<endl;
    //range based loops:
    for(int value :v){
        cout<<value<<" ";
    }
}