//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    vector<int> x8 = {-1,-1,0,1,1,1,0,-1};
    vector<int> y8 = {0,1,1,1,0,-1,-1,-1};
    private:
    void dfs(int i , int j , vector<vector<char>>& grid){
        int r = grid.size();
        int c = grid[0].size();
        if((i < 0 or j < 0) or (i >= r or j >= c)){
            return ;
        }
        if(grid[i][j] == '0'){
            return;
        }
        if(grid[i][j] == '1'){
            grid[i][j] = '0';
        }
        for(int dir = 0 ; dir <= 7 ; dir++){
            dfs(i + x8[dir], j + y8[dir] ,  grid);
        }
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size(); 
        int c = grid[0].size();
        int iscounter = 0;
        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                if(grid[i][j] == '1'){
                    iscounter++;
                    dfs(i,j,grid);
                }
            }
        }
        return iscounter;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends