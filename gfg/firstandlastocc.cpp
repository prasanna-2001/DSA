//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

vector<int> findans(int arr[],int n,int l,int r,int x){
    vector<int> ans;
    
    while(l<=r){
        int mid=l + (r - l) / 2;
        if(arr[mid]==x){
            int a=mid,y=mid;
            while(arr[mid-1]==x){
                a--;
            }
            while(arr[mid+1==x]){
                y++;
            }
            ans.push_back(a);
            ans.push_back(y);
            return ans;
            
        }
        if (arr[mid] > x)
            return findans(arr, n, l, mid - 1, x);
        return findans(arr, n, mid + 1, r, x);
        
    }
}

vector<int> find(int arr[], int n , int x )
{
    
    int l=0, r=n-1;
    vector<int> ans= findans(arr,n,l,r,x);
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends