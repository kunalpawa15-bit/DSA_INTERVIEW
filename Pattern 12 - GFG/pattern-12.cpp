//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            int num = 0;
            for(int j=1;j<=i;j++)
            {
                num++;
                cout<<num<<" ";
            }
            for(int j=1;j<=2*(n-i);j++)
            {
                cout<<" ";
            }
            for(int j=1;j<=2*(n-i);j++)
            {
                cout<<" "; 
            }
            for(int j=1;j<=i;j++)
            {
                cout<<num<<" ";
                num--;
            }
            
            cout<<endl;
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