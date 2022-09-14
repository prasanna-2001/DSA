//linkedlist
// here we nwee pointer to structure

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
// #define 

typedef struct singly_list{
    char name[10];
    int rno;
    struct singly_list *next;
}*SLL; // SLL is a pointer of struct type


SLL getnode(){
    SLL new1,temp; //new1 autu=omaticalluy becomes a pointer odf struct singly list type
    new1 = malloc(sizeof(struct singly_list));
    new1->next = NULL;
    return new1;
}


int main(){
    int ch;
    char res;
    do{
        printf("\n1.Creaton \n2.display\n 3.deletion \n 4.insertion\n5.reversing \n 6. sorting\n 7.exit\n");
        printf("\n enteer uur choice:\t");
        scanf("%d", &ch);
        SLL temp, new1;
        switch(ch){
            case 1:
                SLL head = NULL;
                do{
                    
                    if(head ==NULL){
                        head = getnode();
                        printf("\nenter the name and rolllno :\t");
                        scanf("%s%d", &head->name, &head->rno);
                        temp=head;

                    }
                    else{
                        new1 = getnode();
                        printf("\nenter the name and rolllno :\t");
                        scanf("%s%d", &head->name, &head->rno);
                        temp->next=new1;
                        temp=new1;
                    }
                    printf("\n want to add furtee node");
                    scanf("%c",&res);
                }while(res=="y");
                break;
          
            case 2:
                temp=head
                while(temp)   //temp!=nill
                {
                    print("%s%d",temp->name, temp->rno);
                }
                break;
            case 3:
                break;
            case 4:
            //inertion
                printf("\nenter position of new node");
                scanf("%d",&p);
                tmp=head;
                i=1
                while(i<p-1){
                    temp = temp->next;
                    i++;
                }
                new1 = getnode();
                printf("\nEnter name and roll no :\t");
                scanf("%s%d", new1->name, &new1->rno);
                if(temp!=head){
                    new1->next = temp->next;
                    temp-mext = new1
                }
                else{
                    new1->next= head;
                }
                break;
            case 5:
                break;
            case 6:
                break;
            default :
                exit(0);
    }
    printf("\n Do ypu want ro continue\t");
    scanf("%c",&res);
    }while(res=="y");
}
