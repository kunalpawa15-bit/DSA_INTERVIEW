class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        
        int mid = v.size()/2;
        double med=0.0;
        if(v.size()%2 == 1)
            med = v[mid];
        else
            med = (v[mid-1]+v[mid])/2.0;
        
        return med;
        
    }
    
};

