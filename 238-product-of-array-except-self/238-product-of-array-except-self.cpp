class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ans;
        
        int mul = 1;
        
        for(int i=0;i<n;i++)
        {
            mul = mul*nums[i];
            ans.push_back(mul);
        }
        
        mul = 1;
        for(int i=n-1;i>0;i--)
        {
            ans[i] = ans[i-1]*mul;
            mul= mul*nums[i];
        }
        
        ans[0]=mul;
        
        
        return ans;
    }
};