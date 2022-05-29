class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<int>v;
             
        int a =  lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int b = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        b--;
        
        if(a!=n && nums[a]==target)
        {
            v.push_back(a);
        }
        else{
            v.push_back(-1);
        }
    
        if(b>=0 && nums[b]==target)
        {
            v.push_back(b);
        }
         else
         {
             v.push_back(-1);
         }
    
    
    return v;
        
        
        
    }
};