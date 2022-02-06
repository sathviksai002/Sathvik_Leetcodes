class Solution:
    def sortSentence(self, s: str) -> str:
        l=s.split(" ")
        p=l.copy()
        for i in l:
            w = ord(i[-1])-49
            p[w] = i[:-1]

        return (' '.join(p))
        
        