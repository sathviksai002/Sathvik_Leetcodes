class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = ['a','e','i','o','u','A','E','I','O','U']
        freq = {}
        freq1= {}
        s1 = s[:len(s)//2]
        s2 = s[len(s)//2:]
        for i in s1:
            if i in freq:
                if i in vowels:
                    freq[i]+=1
            else:
                if i in vowels:
                    freq[i] = 1
        for i in s2:
            if i in freq1:
                if i in vowels:
                    freq1[i]+=1
            else:
                if i in vowels:
                    freq1[i] = 1
        fval = sum(list(freq.values()))
        f1val = sum(list(freq1.values()))
        
        return fval == f1val
        
        