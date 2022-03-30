class Solution:
    def countHomogenous(self, s: str) -> int:
        NUM = 10**9 + 7 
        
        n = len(s)
        i = 0 
        res = 0 
        while i < n:
          
            if i< n-1 and s[i] == s[i+1]:
                start = i 
                
                while i < n-1 and s[i] == s[i+1]:
                    i += 1
              
                r = i - start + 1
                res += r*(r+1)//2 
                i += 1
            else:
                i += 1
                res += 1
        return res % NUM