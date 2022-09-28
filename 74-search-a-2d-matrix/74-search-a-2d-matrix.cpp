class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         // Iterator used to store the position of searched element
        std::vector<int>::iterator it;
        // for(auto i : matrix){
        //     it = std::find (i.begin(), i.end(), target);
        //     if (it != i.end()){
        //         return "true";
        //         break;
        //     }
        // }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};