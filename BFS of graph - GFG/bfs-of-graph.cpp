//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<bool> visited;
    queue<int> q;
    vector<int> arr;
    
    void bfs(int s, vector<int> adj[]){
        if(visited[s]){
            return ;
        }
        visited[s] = true;
        while(!q.empty()){
            int a = q.front();
            q.pop();
            arr.push_back(a);
            for(auto x : adj[a]){
               if(!visited[x]){
                   visited[x] = true;
                   q.push(x);
               }
            }
        }
    }
    
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        visited = vector<bool>(10010,false);
        q.push(0);
        bfs(0,adj);
        return arr;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends