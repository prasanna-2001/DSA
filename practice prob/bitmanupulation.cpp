#include<bits/stdc++.h>
using namespace std;
int getbit(int num, int pos){
    return((num&(1<<pos))!=0);
}
int setbit(int num, int pos){
    return((num|(1<<pos)));
}
int unsetbit(int num, int pos){ //clear bit
    int mask = ~(1<<pos);
    return(num & mask);
}
int updatebit(int num, int pos, int value){
    int mask = ~(1<<pos);
    num = num & mask;
    return(num | (value<<pos));     
}
int main(){
    //cout << getbit(5,2)<<endl ;
    //cout<<setbit(3,2)<<endl;
    //cout<<unsetbit(7,1)<<endl;
    cout<<updatebit(5,1,1)<<endl;
    return 0;
}
