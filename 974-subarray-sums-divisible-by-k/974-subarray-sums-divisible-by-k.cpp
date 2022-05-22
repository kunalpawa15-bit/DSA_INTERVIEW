class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        vector<int>s(k);
        s[sum]++;
        int count = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum = (sum + nums[i])%k;
            
            if(sum<0)sum = sum + k;
            
            count = count + s[sum];
            s[sum]++;
        }
        
        return count;
        
    }
};

