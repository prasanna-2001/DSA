#include<bits/stdc++.h>
using namespace std;
int main(){
    int happy=1,sad=0;
    double overall_happiness,overall_sadness;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max = a[0];
    int min = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
            happy = happy+1;
            // cout<<"happy is : " << happy <<endl;
        }
        if(a[i]<min){
            min = a[i];
            sad = sad+1;
            // cout<<"sad is : " << sad <<endl;

        }

    }
    cout<<"happy times is : " << happy << "Out of "<< n << endl;
    cout<<"sad times is : " << sad << "Out of "<< n << endl;
    // overall_happiness = float((happy/n)*100));
    // overall_sadness = float((sad/n)*100);
    // cout << " HAppyness percent" << overall_happiness <<endl;
    // cout << "sad percent " << overall_sadness << endl; 
    /

    
}