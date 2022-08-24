class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int sum = 0;
        int count = 0;
        vector<int>v(k);
        v[sum]++;
        for(int i=0;i<nums.size();i++)
        {
            sum = (sum + nums[i])%k;
            if(sum<0)sum= sum + k;
            
            count = count + v[sum];
            v[sum]++;
        }
        return count;
    }
};
// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//         int n = nums.size();
//         int sum = 0;
//         int count = 0;
//         for(int i=0;i<n;i++)
//         {
//             sum = nums[i];
//             if(sum%k==0)count++;
//             for(int j=i+1;j<n;j++)
//             {
//                 sum = sum + nums[j];
//                 if(sum%k==0)
//                     count++;
//             }
//         }
//         return count;
//     }
// };