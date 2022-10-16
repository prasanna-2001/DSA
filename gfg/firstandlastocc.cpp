//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// int findfirstans(int arr[],int n,int l,int r,int x){
//     while(l<=r){
//         int mid=l + (r - l) / 2;
//         if(mid==0 || (arr[mid]==x && arr[mid-1]<x)){
//             return mid;
            
//         }
//         if (arr[mid] > x)
//             return findfirstans(arr, n, l, mid - 1, x);
//         return findfirstans(arr, n, mid + 1, r, x);
        
//     }
// }


int findfirstans(int arr[], int n, int low, int high, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return findfirstans(arr, n, (mid + 1), high, x);
        else
            return findfirstans(arr, n, low, (mid - 1), x);
    }
    return -1;
}


int findlastans(int arr[],int n,int l,int r,int x){
    while(l<=r){
        int mid=l + (r - l) / 2;
        if(mid==n-1 || (arr[mid]==x && arr[mid+1]>x)){
            return mid;
            
        }
        if (arr[mid] > x)
            return findlastans(arr, n, l, mid - 1, x);
        return findlastans(arr, n, mid + 1, r, x);
        
    }
}

vector<int> find(int arr[], int n , int x )
{
    
    int l=0, r=n-1;
    vector<int> ans(2);
    ans[0]=findfirstans(arr,n,l,r,x);
    ans[1]=findlastans(arr,n,l,r,x);

    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t=1;
    while(t--)
    {
        int n=9,x=5;
        int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends