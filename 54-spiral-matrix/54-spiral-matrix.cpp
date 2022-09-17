class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int> ans;
        
        int row = matrix.size();
        int coloum = matrix[0].size();
        
        int total = row*coloum;
        int count = 0;
        // indexes
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = coloum -1;
        
        while(count<total){
            // for frist row
            for(int ind = startingRow; count<total && ind <= endingCol; ind++){
                ans.push_back(matrix[startingRow][ind]);
                count++;
            }
            startingRow++;
            
            //for ending coloum 
            for(int ind = startingRow; count<total && ind <= endingRow; ind++){
                ans.push_back(matrix[ind][endingCol]);
                count++;
            }
            endingCol--;
            
            // for endlingRow
            for(int ind = endingCol; count<total && ind >= startingCol;ind--){
                ans.push_back(matrix[endingRow][ind]);
                count++;
            }
            endingRow--;
            
            //for Frist Coloum
            for(int ind = endingRow; count<total && ind>= startingRow; ind--){
                ans.push_back(matrix[ind][startingCol]);
                count++;
            }
            startingCol++;
            
        }
        return ans;
    }
};