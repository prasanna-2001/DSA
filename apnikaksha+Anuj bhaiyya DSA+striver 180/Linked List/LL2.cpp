#include<bits/stdc++.h>
using namespace std; 

class node{
    public:
        int data;
        node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    if(head==NULL){
        head = n;
        return; 
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
    return;

}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
    return;
}
void printll(node* head){
    node* temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }    
}

int main(){
    
    node* head =NULL;
    insertAtTail(head,23);
    insertAtTail(head,23);
    insertAtTail(head,23);
    insertAtTail(head,23);
    insertAtHead(head, 24);
    printll(head);
    return 0;
}