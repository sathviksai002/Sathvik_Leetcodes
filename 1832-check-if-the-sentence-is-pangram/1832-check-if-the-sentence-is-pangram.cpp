class Solution {
public:
    bool checkIfPangram(string sentence) {
        set <char> check;
        for(auto x : sentence){
            check.insert(x);
        }
        if (check.size() == 26){
            return true;
        }
        return false;
    }
};