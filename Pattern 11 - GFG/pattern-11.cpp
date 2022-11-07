//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int num = 0;

        for(int i=1;i<=n;i++)
        {
            if(i%2==0)num=0;
            if(i%2!=0)num=1;
            for(int j=1;j<=i;j++)
            {
                cout<<num<<" ";
                num = 1-num;
            
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