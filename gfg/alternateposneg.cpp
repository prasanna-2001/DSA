//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    queue<int> pos;
	    queue<int>neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            pos.push(arr[i]);
	        }
	        else if(arr[i]<=0){
	            neg.push(arr[i]);
	        }
	        
	    }
	    int count=0;
	    while((!pos.empty())&&(!neg.empty())){
	            if(count%2==0){
	                arr[count]=pos.front();
	                pos.pop();
	                count++;
	            }
	            else if(count%2!=0){
	                arr[count]=neg.front();
	                neg.pop();
	                count++;
	            }
	    }
	    if(pos.empty()){
	       while(!neg.empty()){
	           arr[count]=neg.front();
	           neg.pop();
	           count++;
	       } 
	    }
	    else if(neg.empty()){
	       while(!pos.empty()){
	           arr[count]=pos.front();
	           pos.pop();
	           count++;
	       } 
	    }
	        
	   
	}
};

//{ Driver Code Starts.

int main() {
    int t=1;
    // cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends