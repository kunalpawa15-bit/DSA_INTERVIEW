class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while(num>0)
        {
            num = num-i;
            i = i+2;
            if(!num)return true;
        }
        
        return false;
    }
   
};