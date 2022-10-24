#include<bits/stdc++.h>
using namespace std; 

//map store key value pair;//its is not linear ie not continuous// so direct i++ se nhi hota iterator ++ krna pdta. 
//standard maps me valur hamesha sorted order me hoti hai //red black tree is used as an internal application
//aur unordered me jis order me apan dalte usi me hote
//mapname.end(): last node ke age ka nodde
int main(){
 map<int, string>m;

//insertion: 

 m[1]="abc"; 
 m[5]="ffbc"; 
 m[3]="acd"; 
 //or
 m.insert({4,"dfg"});
 map<int,string>::iterator it;
 for(it=m.begin();it!=m.end();++it){
    cout<<(*it).first<<": "<<(*it).second<<endl;
    // cout<<it->first<<": "<<it->second<<endl; //this also works
 }
 }