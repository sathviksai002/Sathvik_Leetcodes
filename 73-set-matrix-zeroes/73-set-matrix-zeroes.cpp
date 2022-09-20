class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        set<int> r;
        set<int> c;
        for(int i = 0; i < m; i++){
            for(int j = 0 ; j < n ; j++){
                if (matrix[i][j] == 0){
                    r.insert(i); //insert row index
                    c.insert(j); // insert column index
                }
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0; j < n ; j++){
                if (r.count(i) || c.count(j)){
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};