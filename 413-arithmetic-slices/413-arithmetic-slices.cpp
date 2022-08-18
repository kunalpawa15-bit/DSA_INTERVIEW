class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0;
        
        for(int i = 0; i<nums.size()-1;i++){
            int diff = nums[i+1]-nums[i];
            for(int j = i+2;j<nums.size();j++){
                if(nums[j]-nums[j-1]==diff)ans++;
                else break;
            }
        }
        return ans;
    }
};
// class Solution {
// public:
//     int numberOfArithmeticSlices(vector<int>& nums) {
//         int count=0;
//         int n  =nums.size();
//         if(n<3)return 0;
//         for(int i=0;i<n-2;i++)
//         {
//             for(int j = i+2;j<n;j++)
//             {
//                 if(f(i,j,nums)==true)
//                     count++;
//             }
//         }
//         return count;
//     }
//     bool f(int i,int j,vector<int>&nums)
//     {
//         int sum = 0;
//         int count = nums[i+1]-nums[i];
//         for(int k=i;k<j;k++)
//         {
//             sum = sum+ nums[i+1]-nums[i];
//         }
//         if(sum/(j-i) == count)
//             return true;
//         return false;
//     }
// };