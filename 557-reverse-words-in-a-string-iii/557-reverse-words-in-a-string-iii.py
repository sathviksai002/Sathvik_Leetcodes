class Solution:
    def reverseWords(self, s: str) -> str:
        p=''
        for i in s.split():
            p=p+(i[::-1])
            p=p+' '
        return p[:-1]

        
        