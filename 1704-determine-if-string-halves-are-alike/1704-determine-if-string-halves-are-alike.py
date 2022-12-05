class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = ['a','e','i','o','u','A','E','I','O','U']
        s1 = s[:len(s)//2]
        s2 = s[len(s)//2:]
        cnt = 0
        cnt1 = 0
        for i in s1:
            if i in vowels:
                cnt +=1
                
        for i in s2:
            if i in vowels:
                cnt1 += 1
        
        return cnt == cnt1
                