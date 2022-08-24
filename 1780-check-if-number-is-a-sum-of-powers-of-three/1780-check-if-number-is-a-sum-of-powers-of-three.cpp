class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n) {
            if (n % 3 == 2) return false;
            n /= 3;
        }
        return true;
    }
};
// class Solution {
// public:
//     bool checkPowersOfThree(int n) {
//         int i=0;
//         int num = INT_MIN;
//         vector<int>v;
//         while(num<=n)
//         {
//             num = pow(3,i);
//             v.push_back(num);
//             i++;
            
            
//         }
        
//         for(int i=0;i<v.size();i++)
//         {
//             if(v[i]==n)
//                 return true;
//             if(v[i]>n)
//             {
//                 n = n - v[i-1];
//                 i=0;
//                 v.erase(v.begin()+(i-2));
//             }
//         }
//         return false;
//     }
   
// };