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

bool isIdentical(Node *r1, Node *r2){
  if(r1==NULL && R2==NULL){
    return true;
  }
  if(r1==NULL && r2!=NULL){
    return false;
  }
  if(r1!=NULL && r2==NULL){
    return false;
  }

  bool left = isIdentical(r1->left, r2->left);
  bool right = isIdentical(r1->right, r2->right);
  bool nowValue= r1->data==r2->data;

  if(left && right && nowValue){
    return true;
  }
  else{
    return false;
  }

}
 
int main(){
  Node* root= new Node(73);
  root->right=new Node(67);
  root->right->left=new Node(69);
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
    // cout<<heightofbt(root);
  // vector<int> v = inorderTraversal(root);   
  // for(int i=0;i<v.size();i++){
  //   cout<<v[i]<<"  ";
  // } 
// cout<<diameterOfBt(root);
//  pair<int,int> ans = diameterFast(root);
//  cout<<ans.first;

}