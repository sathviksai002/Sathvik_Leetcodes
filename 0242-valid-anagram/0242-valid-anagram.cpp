class Solution {
public:
    bool isAnagram(string s, string t) {
        vector < int > freqs(26,0);
        vector < int > freqt(26,0);
        
        if (s.size() != t.size()){
            return false;
        }
        
        for(auto x : s){
            freqs[x - 97]++;
        }
        for(auto x : t){
            freqt[x - 97]++;
        }
        
        for(int i = 0 ; i < 26; i++){
            if (freqs[i] != freqt[i]){
                return false;
            }
        }
        
        return true;
    }
};