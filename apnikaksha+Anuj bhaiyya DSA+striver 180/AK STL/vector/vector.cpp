#include<bits/stdc++.h>
using namespace std; 
int main(){
 vector<int> v;
 v.push_back(3);//1 
 v.push_back(2); //1,2
 v.push_back(3); 
 v.push_back(4);//1,2,3,4
 v.pop_back();//1,2,3 //pops the end element
 v.pop_back(); //1,2

//  for(int i=0;i<v.size();i++){
//      cout<<v[i]<<endl;
//  } 

// vector<int>::iterator it;
// for(it=v.begin();it<v.end();it++){
//     cout<<*it<<endl;
// }

for(auto element:v){
    cout<<element<<endl;
}



//anothwe way to definw vwextoe

//vector<int> v2(size,sametype of elements (enter singkle)/diff elements -enter differnt coma seperated)

vector<int> v2(3,50);

for(auto element:v2){
    cout<<element<<endl;
}

//swap vector values
swap(v,v2);

for(auto element:v){
    cout<<element<<endl;
}
for(auto element:v2){
    cout<<element<<endl;
}

//sort
// sort(name.begin(),name.end());
// sort(v2.begin(),v2.end());
// for(auto element:v2){
//     cout<<element<<endl;
// }

}











