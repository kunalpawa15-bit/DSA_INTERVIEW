class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=0;
        int k = n-1;
        
        while(j<=k)
        {
            switch(nums[j])
            {
                case 0:
                    swap(nums[i++],nums[j++]);
                    break;
                case 1:
                    j++;
                    break;
                case 2:
                    swap(nums[j],nums[k--]);
                    break;
            }
        }
            
    }
};