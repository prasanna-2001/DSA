#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin>>n>>q;
    vector<vector<int>> vect;
    while(n--){
        vector<int> emp;
        int no; 
        cin>>no;
        for(int i=0; i<no; i++){
            int temp;
            cin>>temp;
            emp.push_back(temp);
        }
        vect.push_back(emp);
    }
    while(q--){
        int i,j;
        cin>>i>>j;
        cout<<vect[i][j];
    }
    
    
    return 0;
}
