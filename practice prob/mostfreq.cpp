#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,j=0, res, flag=0;
    cin >> n;
    int b[n-1],a[n];
    for(int i=0; i<n-1; i++){
        cin >> b[i];
    }
    
    
    for(int i=0; i<2*n; i++){
        if(i%2 != 0){
            a[j]=i;
            j++;
        }
    }

//     cout << "-------------"<<endl;

//    for(int i=0; i<n; i++){
//        cout<<a[i]<<endl;
//    }

//    cout << "-------------"<<endl;


    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            flag = 0;
            if(a[i]==b[j]){
                flag=1;
                break;
            }
            
        }
        if(flag==0){
            res=a[i];
            break;
        }
        
    }
    cout << res;
}