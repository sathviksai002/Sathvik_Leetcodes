//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<bool>visited;
    vector<int> x4 = {-1,0,1,0};
    vector<int> y4 = {0,1,0,-1};
    vector<int> arr;
    void dfs(int s, vector<int> adj[]){
        if(visited[s]){
            return;
        }
        visited[s] = true;
        arr.push_back(s);
        for(auto x : adj[s]){
            dfs(x,adj);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        visited = vector<bool>(10010,false);
        dfs(0,adj);
        return arr;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends