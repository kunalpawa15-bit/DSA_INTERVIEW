class Solution {
    vector<vector<int>>v;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v1;
        f(v1,nums,0);
        return v;
    }
    
    void f(vector<int>&v1,vector<int>&nums,int ind)
    {int n = nums.size();
   
        v.push_back(v1);
   
  
        for(int i=ind;i<n;i++)
        {
        if(i!=ind && nums[i]==nums[i-1])continue;
        v1.push_back(nums[i]);
        f(v1,nums,i+1);
        v1.pop_back();

        }
        
        
    }
};


