class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size();
        int i = 0; //first row
        int j = m-1;
        bool flag = false;
        while (i<matrix.size() && j>=0){
            if (matrix[i][j] == target){
                flag = true;
                return flag;
            }
            if (matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
    return flag;
    }
};