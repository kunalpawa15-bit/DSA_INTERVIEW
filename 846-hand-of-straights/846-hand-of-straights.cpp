class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int k) {
        int n = hand.size();
        map<int,int>m;
        priority_queue<int,vector<int>,greater<int>>minh;
        
        if(n%k!=0)return false;
        
        for(int i=0;i<n;i++)
        {
            m[hand[i]]++;
        }
        
        for(auto it:m)
        {
            minh.push(it.first);
        }
        
        while(!minh.empty())
        {
            int val = minh.top();
            
            for(int i=0;i<k;i++)
            {
                if(m.find(i+val) == m.end())
                {
                    return false;
                }
                
                m[i+val]--;
                if(m[i+val]==0)
                {
                    if((i+val)!=minh.top())
                        return false;
                    minh.pop();
                }
            }
        }
        return true;
    }
};