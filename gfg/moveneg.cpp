//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
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
	    while(!pos.empty()){
	            arr[count]=pos.front();
	            pos.pop();
	            count++;
	    }
	    while(!neg.empty()){
	        arr[count]=neg.front();
	        neg.pop();
	        count++;
	    }
	    }
    
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t=1;
	// cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends