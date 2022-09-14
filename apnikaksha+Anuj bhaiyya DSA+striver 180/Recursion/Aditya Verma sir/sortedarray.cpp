#include<bits/stdc++.h>
using namespace std; 
void insert(vector <int> &vect, int temp){
    if(vect.size()==0 || vect[vect.size()-1]<=temp){
        vect.push_back(temp);
    }
    
}
void sort(vector <int> &vect){
    if(vec.size()==1){
        return;
    }
    int temp = vect[vect.size()-1];
    vector.pop_back();
    sort(vect);
    insert(vect, temp);
}
int main(){
    vector <int> vect1;
    int no,a;
    cin>>no;

    for(int x=0; x<no; x++){
        cin>>a;
        vect1.push_back(a);
    }
    // for(int x: vect1){
    //     cout<<x;
    // }
    sort(vect1);
}
