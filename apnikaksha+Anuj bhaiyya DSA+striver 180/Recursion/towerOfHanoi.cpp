#include<bits/stdc++.h>
using namespace std; 

void  hanaoiTower(int n, char src, char dest, char helper){
    //basecase
    if(n==0){
        return;  
    }
    
    
    hanaoiTower(n-1, src, helper, dest);
    cout<<"move from " << src << " to " << dest<<endl;
    hanaoiTower(n-1, helper, dest, src);

}
int main(){
  hanaoiTower(3, 'a', 'c', 'b');
}


