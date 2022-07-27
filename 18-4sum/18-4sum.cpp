class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        for(int i=0; i<n; ++i){
            long long remain = target - nums[i];
            
            for(int j = i+1; j < n; ++j){
                int left = j+1, right = n-1;
                long long remain2 = remain - nums[j];
                
                while(left < right){
                    if((nums[left] + nums[right]) < remain2) left++;
                    else if((nums[left] + nums[right]) > remain2) right--;
                    else{
                        
                        int x = nums[left];                       
                        int y = nums[right];

                        ans.push_back({nums[i], nums[j], nums[left], nums[right]}); 

                        while(left < right && nums[left] == x) ++left;

                        while(left < right && nums[right] == y) --right;
                    
                    }         
                }              
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            while(i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        
        return ans;
    }
};