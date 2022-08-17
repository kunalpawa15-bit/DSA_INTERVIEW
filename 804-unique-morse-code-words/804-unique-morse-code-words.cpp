class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[] =  {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string temp = "";
        set<string>se;
        for(auto str:words)
        {
            for(auto c:str)
            {
                temp = temp + s[c-97];
            }
            se.insert(temp);
            temp = "";
        }
        return se.size();
    }
};
