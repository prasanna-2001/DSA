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

// void levelOrderTraversal(Node* root){
//     int k=0;
//     if(root==NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* nd = q.front(); //yaha node typ ka vaiable bana rahe hai nayi node nhi bana rahe hai so new keyword use nhikarna
//         q.pop();
//         if(nd != NULL){
//             cout<<nd->data<<" ";
//             if(nd->left){
//                 q.push(nd->left);
//             }
//             if(nd->right){
//                 q.push(nd->right);
//             }
//         }
//         else{
//             if(!q.empty()){
//                 k++;
//                 q.push(NULL);
//             }
//         }
//     }
//     cout<<"\n"<<k+1<<" ";
// }


//o(n) tc abnd sc = o(height)
int heightofbt(Node* root){
    if(root==NULL){
        return 0;
    }
    // int lheight= heightofbt(root->left);
    // int rheight=heightofbt(root->right);
    return max(heightofbt(root->left),heightofbt(root->right))+1;
}


//pair<diameter,height>

pair<int, int> diameterFast(Node* root){
    if(root==NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right=diameterFast(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;

    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second) +1;
    return ans;

}

//diameter/width of  binary ttrrreeee
// teen type se nikal sakte hai ya to 1. left subtree me hoga ya 2. right me hoga ya 3.combine ie root se hote hue jayenga
int diameterOfBt(Node* root){
    // if(root == NULL ){
    //     return 0;
    // }
    // return max(heightofbt(root->left)+heightofbt(root->right)+1,max(diameterOfBt(root->left),diameterOfBt(root->right)));
    return diameterFast(root).first;

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
    // cout<<heightofbt(root);
//   levelOrderTraversal(root);    
cout<<diameterOfBt(root);
//  pair<int,int> ans = diameterFast(root);
//  cout<<ans.first;

}