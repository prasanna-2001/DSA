#include<bits/stdc++.h>
using namespace std; 

int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n]={}, x[m], y[n];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==0){
                x[i] = 0;
                y[j] = 0;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(x[i]==0 && y[j]==0){
                for(int i1=0; i1<m; i1++){
                        a[i1][j]=0;
                }
                for(int j2=0; j2<n; j2++){
                        a[i][j2]=0;
                }
            }
        }
    }

//replacing -1
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         if(a[i][j]==0){
    //             a[i][j]=-1;
    //             for(int i1=0; i1<m; i1++){
    //                 if(a[i1][j]!=0){
    //                     a[i1][j]=-1;
    //                 }
    //             }
    //             for(int j2=0; j2<n; j2++){
    //                 if(a[i][j2]!=0){
    //                     a[i][j2]=-1;
    //                 }
    //             }
    //         }
    //     }
    // }



//print
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



//repalcing all valur
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         if(a[i][j]==-1){
    //             a[i][j]=0;
    //         }
    //     }
    // }




    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // setZero(a);
}


      