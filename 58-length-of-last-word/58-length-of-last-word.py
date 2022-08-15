class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l=[]
        for i in s.split():
            if i.isalpha():
                l.append(i)
        
        return (len(l[-1]))

        