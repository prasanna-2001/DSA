 #include<bits/stdc++.h>
 using namespace std; 
 
 int thirdLargest(int a[], int n)
    {
        int count=1,ans=0;
         sort(a,a+n);
         for(int i=0;i<n;i++){
             
             if(a[i]!=a[i-1]){
                 count++;
             }
             if(count==3){
                 ans=a[i];
                 break;
             }
         }
         return ans;
    }
    int main(){
        int a[]={2,1,3,4,5};
        int ans=thirdLargest(a,5);
        cout<<ans;
    }