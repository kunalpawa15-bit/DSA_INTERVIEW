class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n = nums.size();
        int l = 0,r = 0,maxi = 0;
        map<int,int>m;
        while(r<n)
        {
            m[nums[r]]++;
            if(m.size()>2)
            {
                while(m.size()>2)
                {
                    m[nums[l]]--;
                    if(m[nums[l]] == 0)m.erase(nums[l]);
                    l++;
                }
            }
            if(m.size()<=2)
            {
                maxi = max(maxi,r-l+1);
            }
            r++;
        }
        return maxi;
    }
};