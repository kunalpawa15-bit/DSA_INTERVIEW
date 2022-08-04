class Solution {
public:
    #define pi pair<int,int>
    class Compare{
        public:
        bool operator()(pi below, pi above){
            
            if(below.first == above.first){ //same freq
                return below.second < above.second; //val high at top when same freq
            }
            return below.first > above.first; // less freq at TOP
        }
    };
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
         priority_queue<pi,vector<pi>,Compare>maxh;
        for(auto it:m)
        {
            maxh.push({it.second,it.first});
        }
        
        vector<int>v;
        while(maxh.size()>0)
        {
            for(int i=0;i<maxh.top().first;i++)
            {
                
            
            v.push_back(maxh.top().second);
            }
            
            maxh.pop();
        }
       
        return v;
    }
};