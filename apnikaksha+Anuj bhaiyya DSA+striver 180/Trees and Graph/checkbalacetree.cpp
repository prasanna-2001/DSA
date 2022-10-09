#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right=NULL;
        }
};

//o(n) tc abnd sc = o(height)
int heightofbt(Node* root){
    if(root==NULL){
        return 0;
    }
    // int lheight= heightofbt(root->left);
    // int rheight=heightofbt(root->right);
    return max(heightofbt(root->left),heightofbt(root->right))+1;
}

pair<bool,bool> checkbalanceFast(Node* root){
    if(root==NULL){
        pair<bool,bool> p = make_pair(false,false);
        return p;
    }
    pair<bool,bool>  left = checkbalanceFast(root->left);
    pair<bool,bool>  right = checkbalanceFast(root->right);
    
    bool op1 = left.first;
    bool op2 = right.first;
    bool op3 = abs(left.second-right.second) <=1;

    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second) +1;
    return ans; 
}

//diff between height of left and rightsubtree is not more than 1 for every node
bool checkBalanceTree(Node* root){
    // if(root==NULL){
    //     return true;
    // }
    // bool left=checkBalanceTree(root->left);
    // bool right=checkBalanceTree(root->right);

    // bool diff= abs(heightofbt(root->left)-heightofbt(root->right) <= 1);
    // if(left &&  right && diff){
    //     return true;
    // }
    // else{
    //     return false;
    // }
    return checkbalanceFast(root).first;
}




int main(){
  Node* root= new Node(73);
  Node* p1=new Node(82);
  Node* p2=new Node(84);
  root->right=p2;
  root->left=p1;
  p1->left=new Node(63);
  p1->right=new Node(34);
  
  p1->left->left=new Node(688);
  p1->left->right=new Node(654);


  p2->left=new Node(33);
  p2->right=new Node(10);
  cout<<checkBalanceTree(root);


}