#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b, i=0;
    int res;
    char c;
    int arr[100];
    cin >> t;
    while(t--){
        cin >> a >> b;
        cin >> c;
        switch(c){
            case '+' :
             res=a+b;
             arr[i]=res;
             break;
            case '-' :
             res=a-b;
             arr[i]=res;
             break;
        }
        i++;
        for(int j=0;j<t;++j){
            cout<<arr[j]<<endl;
        }
    }
}