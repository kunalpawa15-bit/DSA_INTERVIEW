class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0,r = 0,jump = 0;
        while(r < nums.size()-1)
        {
            int maxi = 0;
            for(int i = l ; i<=r;i++)
            {
                 maxi = max(maxi , i + nums[i]);
            }
            jump++;
            l = r+1;
            r = maxi;
            
        }
        return jump;
    }
};