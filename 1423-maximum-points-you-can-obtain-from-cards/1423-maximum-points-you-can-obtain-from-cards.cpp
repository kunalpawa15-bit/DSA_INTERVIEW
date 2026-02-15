class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int lsum = 0 , r = n-1 , sum = 0 , maxi = 0;
        for(int i = 0;i<k;i++)
        {
            lsum += nums[i];
        }
        maxi = lsum;
        for(int i = k-1 ; i>=0 ; i--)
        {
            lsum = lsum - nums[i];
            sum = sum + nums[r];
            r--;
            maxi = max(maxi , lsum + sum);
        }
        return maxi;

    }
};