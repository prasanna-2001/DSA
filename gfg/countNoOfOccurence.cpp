//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int l=0,r=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==x){
	            l=i;
	            break;
	        }
	    }
	    int flag=0;
	    for(int i=n-1;i>=0;i--){
	        if(arr[i]==x){
	            r=i;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        return 0;
	    }
	    if(l==r){
	        return 1;
	    }
	    else{
	        return r-l+1;
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends