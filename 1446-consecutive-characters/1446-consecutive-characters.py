class Solution:
    def maxPower(self, s: str) -> int:
        c = 0
        m = 0
        prev = None
        for i in s:
            if i == prev:
                c += 1
            else:
                prev = i
                c = 1
            m = max(m, c)
        
        
        
        return m