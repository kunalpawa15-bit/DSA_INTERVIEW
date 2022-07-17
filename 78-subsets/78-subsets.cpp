class Solution {
    vector<vector<int>>v;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       int n = nums.size(); 
        vector<int>v1;
        f(v1,nums,0);
        return v;
        

    }
    void f(vector<int>&v1,vector<int>&nums,int i)
    {
        int n = nums.size();
        
        if(i==n)
        {
            v.push_back(v1);
             return;
        }

        v1.push_back(nums[i]);
        f(v1,nums,i+1);
        v1.pop_back();
        f(v1,nums,i+1);
  
        
        
    }
};

