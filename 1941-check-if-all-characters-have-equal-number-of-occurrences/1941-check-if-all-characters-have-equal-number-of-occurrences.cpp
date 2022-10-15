class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector <int> allchars(26,0);
        int mx = 0;
        for(auto x : s){
            allchars[x - 97]++;
            mx = max(mx,allchars[x-97]);
        }
        for(auto s : allchars){
            if (s != mx && s!=0){
                return false;
            }
        }
        return true;
    }
};