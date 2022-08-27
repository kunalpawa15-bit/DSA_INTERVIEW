class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        int sum = 0,ans=0;
        m[sum] = 1;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum + nums[i];
            int find = sum-k;
            if(m.find(find)!=m.end())
            {
                ans = ans + m[find];
            }
            m[sum]++;
        }
        return ans;
        
//         int count = f(nums,k);
//         return count;
//     }
//     int f(vector<int>&v,int k)
//     {
//         int count=0;
//         int n = v.size();
//         for(int i=0;i<n;i++)
//         {
//             int sum = 0;
//             for(int j=i;j<n;j++)
//             {
//                 sum = sum+ v[j];
//                 if(sum==k)
//                     count++;
//             }
//         }
        
//         return count;
    }
};
