class Solution {
public:




int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        
        vector<int>v1(n+1, 0);
        vector<int>v2(n+1, 0);
        
        sum = 0;
        for (int i=0; i<n; i++) {
            sum += cardPoints[i];
           v1[i+1] = sum;
        }
        sum = 0;
        for (int i=n-1; i>=0; i--) {
            sum += cardPoints[i];
            v2[i] = sum;
        }

        reverse(v2.begin(),v2.end());
        
        int answer = 0;
        for(int i=0; i<=k; i++) {      
            answer = max(answer, 
                          v1[i] // Sum of first 'i' cards.
                         + v2[k-i]); // Sum of last 'k-i' cards.
        }
        return answer;
    }
};
