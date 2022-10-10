//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        int sum1 = 0,sum2 = 0;
        for(int i=0;i<n;i++)
        {
            sum1 = sum1 + A[i];
        }
        for(int i=0;i<m;i++)
        {
            sum2 = sum2 + B[i];
        }
        if(sum1==sum2)return 1;
        if((sum1-sum2)%2 !=0 )return -1;
        int target =(sum1 - sum2) /2;
        sort(A,A+n);
        sort(B,B+m);
        
        if(target==0)return -1;
        int i=0,j=0;
        while(i<n && j<m)
        {
            int diff = A[i]-B[j];
            if(diff==target)return 1;
            if(diff<target)i++;
            else j++;
        }
        return -1;
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends