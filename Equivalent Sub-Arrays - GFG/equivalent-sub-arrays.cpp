// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int countDistinctSubarray(int a[], int n)
    {
        //code here.
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        int count = m.size();
        m.clear();
        int j=0,window=0,ans=0;
        for(int i=0;i<n;i++)
        {
            while(j<n && window<count)
            {
                m[a[j]]++;
                if(m[a[j]]==1)
                {
                    window++;
                }
                j++;
            }
            
            if(window==count)
            {
                ans = ans + (n-j+1);
            }
            m[a[i]]--;
            if(m[a[i]]==0)
            {
                window--;
            }
        }
        
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends