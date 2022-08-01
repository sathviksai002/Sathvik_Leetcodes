class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        p =[]
        for i in sentences:
            p.append(i.count(" ")+1)
        
        return max(p)

        