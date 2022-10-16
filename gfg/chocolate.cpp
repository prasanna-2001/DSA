//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int l=0,r=n-1;
        while(l<r){
            if(r-l==1){
                return min(arr[l],arr[r]);
            }
            if(arr[l]>arr[r]){
                l++;
            }
            if(arr[r]>arr[l]){
                r--;
            }
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t=1;
    // scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.chocolates(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends