//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  vector<bool> visited;
  
  bool bfs(int i, vector<int> adj[]){
      
      queue<pair<int,int> > q;
      q.push({i,-1});
      visited[i] = true;
      
      while(!q.empty()){
          int node = q.front().first;
          int parent = q.front().second;
          q.pop();
          for(auto x : adj[node]){
              if(!visited[x]){
                  visited[x] = true;
                  q.push({x,node});
              }
              else if(parent != x){
                  return true;
              }
          }
      }
      return false;
  }
  
  
    bool isCycle(int V, vector<int> adj[]) {
        visited = vector<bool>(V);
        for(int i = 0 ; i < V ; i++){
            if(!visited[i]){
                if(bfs(i,adj)){
                    return true;
                }
            }
        }
        return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends