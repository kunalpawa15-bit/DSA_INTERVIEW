class Solution {
public:
    unordered_map<int,int> m;
    int mx(vector<int>& nums){
        int ans=INT_MIN;
        int e;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto x : m){
            ans=max(ans,x.second);
        }
        return ans;
    }
    
    int mn(vector<int>& nums,int e){
        int n=nums.size();
        int i=0,j=n-1;
        while(nums[i]!=e){
            i++;
        }
        while(nums[j]!=e){
            j--;
        }
        return j-i+1;
    }
    
    int findShortestSubArray(vector<int>& nums) {
        int ans=INT_MAX;
        int t=mx(nums);
        vector<int> v;
        for(auto i : m){
            if(i.second==t){
                v.push_back(i.first);
            }
        }
        for(int i=0;i<v.size();i++){
            ans=min(ans,mn(nums,v[i]));
        }
        return ans;
    }
};