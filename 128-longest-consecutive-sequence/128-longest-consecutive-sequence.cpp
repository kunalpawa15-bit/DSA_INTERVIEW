class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int>s;
        int curr=0;
        int maxi= 0;
        int sum;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(!s.count(nums[i]-1))
            {
                curr = nums[i];
                sum=1;
                
                while(s.count(curr+1))
                {
                    curr++;
                    sum++;
                }
                
                maxi = max(maxi,sum);
                
            }
        }
        return maxi;
    }
};
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
        
//         int n  =nums.size();
//         sort(nums.begin(),nums.end());
//         int count=1;
//         int maxi = 1;
//         for(int i=1;i<n;i++)
//         {
//             if(nums[i] == nums[i-1]+1)
//             {
//                 count++;
//             }
//             else if(nums[i]==nums[i-1])
//                 continue;
//             else
//             {
//                 count=1;
//             }
            
//             maxi = max(maxi,count);
//         }
        
//         if(n==0)return 0;
//         else
//             return maxi;
//     }
// };