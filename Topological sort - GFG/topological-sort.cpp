//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	stack<int> stk;
	vector<bool> visited;
	void dfs(int i , vector<int> adj[]){
	    if(visited[i]){
	        return ;
	    }
	    visited[i] = true;
	    for(auto x : adj[i]){
	        dfs(x,adj);
	    }
	    stk.push(i);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    visited = vector<bool>(10010,false);
	   for(int i = 0 ; i < V  ; i++){
	       dfs(i,adj);
	   }
	   vector<int> arr;
	   while(!stk.empty()){
	       arr.push_back(stk.top());
	       stk.pop();
	   }
	   return arr;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends