class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> m (n,vector<int> (n));
        int sr=0,er=n-1,sc=0,ec=n-1;
        int k=1;
        
        while(k<=n*n){
            for(int j = sc ; k<= n*n && j<=ec ; j++){
                m[sr][j] = k++;
            }
            sr++;
            for(int i = sr ; k <= n*n && i <= er ; i++){
                m[i][ec] = k++;
            }
            ec--;
            for(int j = ec ; k <= n*n && j >= sc ; j--){
                m[er][j] = k++;
            }
            er--;
            for(int i = er ; k <= n*n && i >= sr ;i--){
                m[i][sc] = k++;
            }
            sc++;
        }
        
        return m;
        
    }
};