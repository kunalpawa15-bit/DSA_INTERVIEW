class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        
        if(nums.size()<3)
            return res;
        
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
               {
                   int l= i+1;
                   int h = nums.size()-1;
                   int sum = 0-nums[i];
                   
                   while(l<h)
                   {
                       if(nums[l] + nums[h] == sum)
                       {
                           vector<int>v;
                           v.push_back(nums[i]);
                           v.push_back(nums[l]);
                           v.push_back(nums[h]);
                           res.push_back(v);
                           
                           while(l<h && nums[l]==nums[l+1])l++;
                           while(l<h && nums[h]==nums[h-1])h--;
                           l++;
                           h--;
                       }
                       
                       else if(nums[l] + nums[h] < sum)l++;
                           else h--;
                       
                   }
               }
        }
               
               return res;
    }
};