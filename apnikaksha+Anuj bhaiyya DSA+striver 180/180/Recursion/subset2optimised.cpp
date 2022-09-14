#include<bits/stdc++.h>
using namespace std; 

void findsubset(int index, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i = index; i<nums.size(); i++){
        if(nums[i]==nums[i-1] && i!=index){
            continue;
        }
        ds.push_back(nums[i]);
        findsubset(i+1, nums,ds,ans);
        ds.pop_back();
    }
}
vector<vector<int>> ansfunct(vector<int> &nums, vector<vector<int>> &ans){
    vector<int> ds;
    sort(nums.begin(), nums.end());
    findsubset(0, nums,ds,ans);
    return ans;
}

int main(){
  vector<vector<int>> ans;
  vector<int> nums;
  int len=3;
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(2);
  ans = ansfunct(nums, ans);
  for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}














