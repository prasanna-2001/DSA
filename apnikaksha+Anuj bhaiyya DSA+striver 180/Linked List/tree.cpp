#include<bits/stdc++.h>
using namespace std; 
class node{
    public :
        int data;
        node* left;
        node* right;

        node(int val){
            data = val;
            right= NULL;
            left = NULL;
        }
};


int main(){
   node* root = new node(23) ;
   cout<<root->data;
}