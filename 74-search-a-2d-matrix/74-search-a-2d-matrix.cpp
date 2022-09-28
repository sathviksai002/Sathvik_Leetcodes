class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        std::vector<int>::iterator it;
        for(auto i : matrix){
            it = std::find (i.begin(), i.end(), target);
            if (it != i.end()){
                return "true";
                break;
            }
        }
        return false;
    }
};