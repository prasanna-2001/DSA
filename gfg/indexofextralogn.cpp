//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findindExtra(int a[], int b[], int l, int r, int n){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return a[0];
        }
        if(a[0]!=b[0]){
            return 0;
        }
        if(a[n-1]!=b[n-2]){
            return n-1;
        }
        int mid = l + (r - l) / 2;
        if(a[mid]==b[mid]){
            findindExtra(a, b, mid+1,r,n);
        }
        else{
            if(a[mid-1]==b[mid-1]){
                return mid;
            }
            else{
                findindExtra(a, b, l,mid-1,n);
            }
        }
        
    }
    
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int l=0,r=n-1;
        findindExtra(a, b, l,r,n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout <<"index is : "<< obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends