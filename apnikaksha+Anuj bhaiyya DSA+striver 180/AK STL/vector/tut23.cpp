#include<bits/stdc++.h>
using namespace std; 

class Shop{
    string itemId[100];
    int itemPrice[100];
    int counter;

    public: 
        void initCounter(void){
            counter = 0;
        }
        void getPrice(void);
        void displayPrice(void);
        

};

void Shop :: getPrice(void){
    cout<<"enter thet ID of Item no"<<counter+1<<":\t";
    cin>>itemId[counter];
    cout<<"\nenter the item price:\t";
    cin>>itemPrice[counter];
    counter++;
}
void Shop :: displayPrice(void){
    for(int i=0; i<counter; i++){
        cout<< "item ID : " << itemId[i] << "\t Item Price :  "<<itemPrice[i]<< "$"<<endl;
    }
}


int main(){
  Shop s;
  int x = 1;
    s.initCounter();
  while(x==1){
      s.getPrice();
      cout<<"eant bto enter new enter 1 or to stop enter 0";
      cin>>x;
  }

    // s.getPrice();
    // s.getPrice();
    // s.getPrice();
    s.displayPrice();

  
}