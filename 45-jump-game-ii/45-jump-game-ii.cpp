class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
            if(n==0)return -1;
        if(n==1)return 0;
        
        int maxi = nums[0];
        int steps = nums[0];
        int jump = 1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)return jump;
            maxi = max(maxi,i+nums[i]);
            steps--;
            if(steps==0){
                jump++;
            if(i>=maxi)return -1;
            steps = maxi-i;
        }}
        return -1;
    }
};

