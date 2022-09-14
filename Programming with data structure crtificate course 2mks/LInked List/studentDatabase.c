#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 50
struct  student{
    char name[10];
    int rno;
    float cgpa;
};
struct student St[MAX];

int main(){
    int i=0,n,j,srno;
    char res;
    // printf("\nEnter the numberof studentd : \t");
    // scanf("%d",&n);
    // for(i=0;i<n;i++)

    do{
        printf("\nEnter name roll cgpa:\t");
        scanf("%s%d%f",&St[i].name, &St[i].rno, &St[i].cgpa);
        i++;
        printf("\nWant to add more??");
        scanf(" %c",&res);
    }while(res=='y');
     n=i;
printf("\n\tNmae\t\tRolllNo\t\tCGPA\n--------------------------------------------------------------\n");
for(i=0;i<n;i++){
    printf("\t%s\t\t%d\t\t%f\n",St[i].name, St[i].rno, St[i].cgpa);
}

//seaarch module
printf("\nenter tro be search:\t");
scanf("%d",&srno);
for(i=0;i<n;i++){
    if(srno==St[i].rno){
        printf("\n roll no found\n");
        printf("\nName is %s snd cgpa is %f", St[i].name,St[i].cgpa);
        break;
    }
    // else{
    //     continue; //itreration continuye ise hoga ye nhi likha to bhi chalta same i kam hoga;
    // }
}



//sortng module
//selection sort
int temp;
float cgpa1;

char name1[10];
for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        if(St[i].rno > St[j].rno){
            temp = St[i].rno;
            St[i].rno=St[j].rno;
            St[j].rno=temp;

            // name1 = St[i].name;
            // St[i].name=St[j].name;
            // St[j].name=name;
            //aisa nhi kar salte as string ko ddorectly copy nhi kar sakte 

            strcpy(name1, St[i].name);
            strcpy(St[i].name,St[j].name);
            strcpy(St[j].name,name1);

            cgpa1 = St[i].cgpa;
            St[i].cgpa=St[j].cgpa;
            St[j].cgpa=cgpa1;
        }
    }
}

//display pf selected sort
printf("\nsorted list is \n");
printf("\n\tNmae\t\tRolllNo\t\tCGPA\n--------------------------------------------------------------------------\n");
for(i=0;i<n;i++){
    printf("\t%s\t\t%d\t\t%f\n",St[i].name, St[i].rno, St[i].cgpa);
}

}

