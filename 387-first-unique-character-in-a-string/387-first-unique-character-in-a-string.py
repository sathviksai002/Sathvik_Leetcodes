class Solution:
    def firstUniqChar(self, s: str) -> int:
        freq= {}
        for i in s:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
        
        for k,v in freq.items():
            if v == 1:
                return s.index(k)
                break
        
        return -1