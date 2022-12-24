//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        // code here
    vector <int> pre(n);
    pre[0] = arr[0];
    for(int i = 1 ; i < n ; i++){
        pre[i] = pre[i-1] + arr[i];
    }
    
    int left = 0;
    int right = 0;
    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            left = 0;
            right = pre[n - 1] - pre[i];
        }
        if(i == n-1){
            left = pre[n-2];
            right = 0;
        }
        else if(i > 0 && i < n-1){
            left = pre[i-1];
            right = pre[n-1] - pre[i];
        }
        if(left == right){
            return "YES";
        }
    }
    return "NO";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends