class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        setsfordup = set()
        l = 0    
        res = 0 
        for i in range(len(s)):
            while s[i] in setsfordup:
                setsfordup.remove(s[l])
                l+=1
            setsfordup.add(s[i])
            res=max(res,i-l+1)
        return res
        