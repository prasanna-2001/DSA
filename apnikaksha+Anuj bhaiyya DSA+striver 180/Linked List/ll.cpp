#include<bits/stdc++.h>
using namespace std; 

class node{
    public:
        int data;
        node* next;
    node(int val){
        data= val;
        next=NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
    return;

}

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head= n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return;
}



// void insertAtMiddle(node* &head, int val, int pos){
//     node* n = new node(val);
//     pos = pos-1;
//     node* temp = head;
//     while(pos!=0){
//         temp=temp->next;
//         pos--;
//     }
//     n->next = temp->next;
//     temp=n;
//     return;

// }

bool search(node*head, int val){
     node* temp =head;
     if(head->data==val){
        return true;
     }
     while(temp!= NULL){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
     }
     return false;
}


void reverseIterative(node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    node* prevNode= head ;
    node* currNode=head->next;
    while(currNode !=NULL){
    node* nextNode=currNode->next;
    //reverxe
    currNode->next=prevNode;
    // update
    prevNode=currNode;
    currNode=nextNode;
    }
    head->next=NULL;
    head=prevNode;
}

node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next=NULL;
    return newhead;
}
void display(node* head){
    node* temp =head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp =  temp->next;
    }
    cout<<"NULL"<<endl;
}
node* returnMiddle(node* head){
           

    node* slow = head;
    node* fast = head;
      
    while(fast !=NULL && fast->next != NULL){
        
        slow=slow->next;
        fast=fast->next;            
        fast=fast->next;
        // cout<<fast->data;
    }
    return slow;
        
        
}

int main(){
  node*head = NULL;
// insertAtHead(head,5);
  insertAtHead(head,9);
  insertAtHead(head,6);
  insertAtTail(head,32);
  insertAtTail(head,2);
  insertAtTail(head,3);
  insertAtTail(head,4);

//   insertAtMiddle(head,20,3);
    //

    
//  display(head);


//   bool ens =  search(head,5);
//   cout<<ens<<endl;



//   node* newhead =reverseRecursive(head);
  display(head);
 node* newhead2 = returnMiddle(head);
// display(newhead2);
cout<<newhead2->data;
} 