class Solution {
public:
    string convertToBinary(int n)
    {
        string s = "";
        while(n > 0)
        {
        int r = n%2;
        n = n/2;
        s.push_back('0' + r);
        }
        reverse(s.begin(),s.end());
        return s;
    }
    bool isPrime(int n)
    {
        int cnt = 0;
        if(n<=1)return false;
        for(int i = 1;i<=n;i++)
        {
            if(n%i == 0)cnt++;
            if(cnt > 2)return false;
        }
        return true;

    }
    int  ans = 0;
    int countPrimeSetBits(int left, int right) {
        for(int i = left ; i<=right ; i++)
        {
            int count = 0;
            string r = convertToBinary(i);
            for(int j = 0;j<r.length();j++)
            {
                if(r[j]=='1')count++;
            }
            if(isPrime(count))ans++;
        }
        return ans;
    }
};