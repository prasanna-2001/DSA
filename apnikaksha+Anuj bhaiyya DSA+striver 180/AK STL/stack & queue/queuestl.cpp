#include<bits/stdc++.h>
using namespace std; 
int main(){
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    while(!q.empty()){
        cout<<q.front()<<"\n";
        q.pop();
    }
}
