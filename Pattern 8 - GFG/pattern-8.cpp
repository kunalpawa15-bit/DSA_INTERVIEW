//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    void printTriangle(int n) {
        int m=2*n-1;
        
        for(int i=n; i>=1; i--)
        {
            for(int s=i; s<n; s++)
            {
                cout<<" ";
            }
                
            for(int j=1; j<=m; j++)
            {
                cout<<"*";   
            }
            cout<<endl;
            m-=2;
        }
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends