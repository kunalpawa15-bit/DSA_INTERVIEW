class Solution {
public:
    static bool comp(const vector<int>&a ,const vector<int>&b)
    {
        return b[1] > a[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end() , comp);
        int prev = intervals[0][1];
        int ans = 0;
        for(int i = 1;i<intervals.size();i++)
        {
            if(intervals[i][0] < prev)
            {
                ans++;
            }
            else prev = intervals[i][1];
        }
        return ans;
    }
};