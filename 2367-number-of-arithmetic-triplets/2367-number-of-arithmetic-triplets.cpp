class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int d) {
        int n = nums.size();
        int count=0;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(m.find(nums[i] - d) != m.end() && m.find(nums[i] - 2*d)!=m.end())
            {
                count++;
            }
            
            m[nums[i]] = i;
        }
        return count;
    }
    
 

};