//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);
int poow(int n,int x){
    int ans=1;
    for(int i=0;i<n;i++){
        ans= ans*n;
    }
    return ans;
}
/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int sum=0,len;
    vector<int> v;
    while(n>0){
        if(n%10==0){
            v.push_back(5);
        }
        else{
            v.push_back(n%10);
        }
        n=n/10;
    }
    len=v.size();
    for(int i=0;i<len;i++){
        sum=sum+(v[i]*pow(10,(i)));
    }
    
    return sum;
    
}
// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends

