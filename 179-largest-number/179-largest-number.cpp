class Solution {
public:
    bool static cmp(string a,string b){
       
        string x=a+b;
        string y=b+a;
        return x>y;
    }
    string largestNumber(vector<int>& nums) {
        string str="";
        vector<string>v(nums.size());
        for(int i=0;i<nums.size();++i){
            v[i]=to_string(nums[i]);
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++)
            str+=v[i];
        cout<<str;
        for(int i=0;i<str.size();i++){ 
            if(str[i]!='0') return str;
        }
        return "0";
    }
};