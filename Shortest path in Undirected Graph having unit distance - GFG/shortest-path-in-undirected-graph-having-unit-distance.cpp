//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<vector<int>> adj(N);
        vector<int> dist(N,1e9);
        for(auto x : edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        // for(int i = 0 ; i < N ; i++){
        //     cout << i << " -> ";
        //     for(auto x : adj[i]){
        //         cout << x << " ";
        //     }
        //     cout << "\n";
        // }
        queue<int> q;
        q.push(src);
        dist[src] = 0;
        
        while(!q.empty()){
            int a = q.front();
            q.pop();
            for(auto x : adj[a]){
                if(dist[a] + 1 < dist[x]){
                    dist[x] = dist[a] + 1;
                    q.push(x);
                }
            }
        }
        
        for(int i = 0 ; i < N ; i++){
            if(dist[i] == 1e9){
                dist[i] = -1;
            }
        }

        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends