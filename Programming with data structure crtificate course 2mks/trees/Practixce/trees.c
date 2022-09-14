#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define MAX 20 

typedef struct bs_trees{
    int data;
    struct bs_trees *left, *right;

}*bst;
// bst que[MAX];
// int r=0, f=0;
void inorder(struct bs_trees* root){
       if(root != NULL) {
            inorder(root->left);
            printf("%d ",root->data);          
            inorder(root->right);
        }
}
void bfs(){

}

bst getnode(){
    bst new1;
    new1 = malloc(sizeof(struct bs_trees));
    new1->left = NULL;
    new1->right = NULL;
    return new1;
}
int main(){
    int ch,p,i,j,n,flag=0,h=0;
    char res;
    bst root = NULL, new1,temp,L;
    bst que[MAX];
    int r=-1, f=0;
    do{
        printf("\n1.creation\n2.inorder\n3.levelwisen displauy(bfs)\n");
        printf("enter thge choice");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                do{
                    if(root == NULL){
                        root =getnode();
                        printf("enter data");
                        scanf("%d", &root->data);
                        temp = root;
                    }
                    else{
                        flag=0;
                        printf("enter data to node");
                        new1 = getnode();
                        scanf("%d",&new1->data);

                        do{
                            if(new1->data > temp->data){
                                if(temp->right == NULL){
                                    temp->right = new1;
                                    flag = 1;
                                }
                                else{
                                    temp = temp->right;
                                }
                            }
                            else{
                                if(temp->left == NULL){
                                    temp->left = new1;
                                    flag = 1; 
                                }
                                else{
                                    temp = temp->left;
                                }
                            }
                        }while(flag==0);
                    }
                    printf("want to add more??");
                    scanf(" %c",&res);

                }while(res == 'y');
                break;


            case 2:
            inorder(root);
                break;
            case 3:
                que[++r] = root;
                que[++r] = L;
                while(f<=r){
                    temp = que[f];
                    f++;

                    if(f>r){
                            break;
                        }
                    if(temp != L){
                        printf("%d  ", temp->data);
                        if(temp->left != NULL){
                            que[r++] = temp->left;

                        }
                        if(temp->right!=NULL){
                            que[r++]= temp->right;
                        }
                    } 
                    else{
                        printf("\n");
                        que[r++]=L;
                        h++;
                    }
                }
                printf("\t\n\theight = %d",h);
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
        }

        printf("want to work more ");
        scanf(" %c", &res);
    }while(res=='y');
}