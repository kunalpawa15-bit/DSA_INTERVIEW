class Solution {
public:
    long long check(string s,string pattern){
        int c=0;long long sum=0;
        for(auto i:s){
            if(i==pattern[0])c++;
            if(i==pattern[1])sum+=c;
        }
        return sum;
    }
    long long maximumSubsequenceCount(string text, string pattern) {
        string temp;
        for(auto i:text){
            if(i==pattern[0] || i==pattern[1])temp+=i;
        }
        if(pattern[0]==pattern[1]){
            long long n=temp.size()+1;
            return n*(n-1)/2;
        }
        string t1=pattern[0]+temp;
        string t2=temp+pattern[1];
        return max(check(t1,pattern),check(t2,pattern));
    }
};