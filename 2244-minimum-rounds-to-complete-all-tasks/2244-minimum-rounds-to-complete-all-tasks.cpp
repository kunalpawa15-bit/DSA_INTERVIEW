class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> ump;
        for(int i=0;i<tasks.size();i++)
            ump[tasks[i]]++;
        int ans=0;
        for(auto x:ump){
            int val = x.second;
            if(val==1)
                return-1;
            if(val%3==0){
                ans+=val/3;
            }else if((val+1)%3==0){
                ans+=(val+1)/3;
            }else{
                ans+=(val+2)/3;
            }
        }
        return ans;
    }
               
        
};