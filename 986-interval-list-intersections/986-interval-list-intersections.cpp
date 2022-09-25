class Solution {
public:
       vector<vector<int>> intervalIntersection(vector<vector<int>>& l1, vector<vector<int>>& l2) {
        vector<vector<int>> res;
        for (int l = 0, r = 0; l < l1.size() && r < l2.size();) {
            if (l1[l][0] <= l2[r][0]) {
                if (l1[l][1] >= l2[r][0]) {
                    res.push_back({l2[r][0], min(l1[l][1], l2[r][1])});
                }   
            } else {
                if (l2[r][1] >= l1[l][0]) {
                    res.push_back({l1[l][0], min(l1[l][1], l2[r][1])});
                }
            }
            
            if (l1[l][1] <= l2[r][1]) {
                l++; 
            } else {
                r++;
            }
        }
        
        return res;
    }
};

