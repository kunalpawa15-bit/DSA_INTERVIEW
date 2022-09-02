class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(), start=0, end=n-1;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0)
            vec[start++]=nums[i];
        else
            vec[end--]=nums[i];
    }
    start=0; end=n-1;
    for(int i=0;i<vec.size();i++)
    {
        if(i%2==0)
            nums[i]=vec[start++];
        else
            nums[i]=vec[end--];
    }
    return nums;
    }
};