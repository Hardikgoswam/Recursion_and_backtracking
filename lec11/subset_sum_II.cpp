class Solution {
public:
    void solve(vector<int>&num,vector<vector<int>>&ans,vector<int>&ds,int ind,int n){
      for(int  i = ind ;i <= n ;i++){
          if(i > ind && num[i] == num[i-1]) continue;
          ds.push_back(num[i]);
          ans.push_back(ds);
          solve(num,ans,ds,i+1,n);
          ds.pop_back();
      }


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int>ds;
        //  vector<int>v;
        int n = nums.size();
         ans.push_back(ds);
         sort(nums.begin(),nums.end());
         solve(nums,ans,ds,0,n-1);
         return ans;
    }
};