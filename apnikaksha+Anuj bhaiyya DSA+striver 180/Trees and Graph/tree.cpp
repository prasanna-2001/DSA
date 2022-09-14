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

void levelOrderTraversal(node* &root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* x = q.front();
        q.pop();
        if(x != NULL){
            cout<<x->data<<" ";
            if(x->left){
                q.push(x->left);
            }
            if(x->right){
                q.push(x->right);
            }

        }
        else if(!q.empty()){
                q.push(NULL);            
        }

    }
}


int sumatK(node*root,int k){
    if(root==NULL){
        return -1;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0,sum=0;
    while(!q.empty()){
        node* x = q.front();
        q.pop();
        if(x != NULL){
            if(level == k){
                sum = sum + x->data;
            }
            if(x->left){
                q.push(x->left);
            }
            if(x->right){
                q.push(x->right);
            }

        }
        else if(!q.empty()){
                q.push(NULL);   
                level++;         
        }

    }
    return sum;
}

int main(){
   node* root = new node(23) ;
//    cout<<root->data;
   node* p1 = new node(90) ;   
   node* p2 = new node(45) ;
   root->left = p1;
   root->right = p2;
   p1->right= new node(76);
   p1->left=new node(43);
   p2->left=new node(42);
   p2->right=new node(47);
//    cout<<root->left->right->data;



//    cout<<root->data<<endl;
//    cout<<root->left->data<<endl;
//    cout<<root->right->data<<endl;
//    cout<<root->left->left->data<<endl;
//    cout<<root->left->right->data<<endl;
//    cout<<root->right->left->data<<endl;
//    cout<<root->right->left->data<<endl;

   levelOrderTraversal(root);
   int sumat = sumatK(root,2);
   cout<<sumat<<"is the sum"<<endl;

}