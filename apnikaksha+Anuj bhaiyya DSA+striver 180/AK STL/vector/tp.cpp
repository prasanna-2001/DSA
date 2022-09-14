#include<bits/stdc++.h>
using namespace std; 
class Employee{
    private :
        int a,b,c;
    public : 
        int d,e;
        void setData(int a1,int b1,int c1);
        void getData(){
            cout<<"vlue of "<<a<<endl;
            cout<<"vlue of "<<b<<endl;
            cout<<"vlue of "<<c<<endl;
            cout<<"vlue of "<<d<<endl;
            cout<<"vlue of "<<e<<endl;

        }
};

void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee gulam;
    gulam.d=67;
    gulam.e=51;
    gulam.setData(1,2,3);
    gulam.getData();

}