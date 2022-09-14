#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct singly_list{
    int data;
    singly_list next;
    struct singly_list *next;
}*SLL;


SLL getnode(){
    SLL new1,temp; //new1 autu=omaticalluy becomes a pointer odf struct singly list type
    new1 = malloc(sizeof(struct singly_list));
    new1->next = NULL;
    return new1;
}


int main(){

}