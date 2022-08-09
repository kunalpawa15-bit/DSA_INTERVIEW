class Solution {
public:
    int mod = pow(10,9) + 7;
    
    int numFactoredBinaryTrees(vector<int>& arr) {
	sort(arr.begin(), arr.end());

	int n = arr.size();
        vector<int>dp(n,-1);
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp[arr[i]] = i;
	}

    long ans = 0; 
	for (int i = n - 1; i >= 0; i--) {
		ans = (ans + f(arr, i, mp,dp)) ;
	}

	return ans%mod;
}


double f(vector<int>& arr, int i, unordered_map<int, int>& mp,vector<int>&dp) {
	long ans = 1;
    if(dp[i]!=-1)return dp[i];
    
	for (int j = 0; j < i; j++) {
		if (arr[i] % arr[j] == 0 && mp.find(arr[i] / arr[j]) != mp.end()) {
			long left = f(arr, j, mp,dp);
			long right = f(arr, mp[arr[i] / arr[j]], mp,dp);
			ans = (ans + (left * right))%mod ;
		}
	}
	return dp[i] = ans;
}
};