class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++)
        {
            v.push_back(nums[(((i+nums[i])%n) + n) % n]);
        }
        return v;
    }
};