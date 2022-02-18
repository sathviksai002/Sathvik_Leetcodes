class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
            p=[]
            for i in range(0,len(words)):
                for j in range(0,len(words)):
                    if words[j] in words[i] and words[i]!=words[j]:
                        p.append(words[j])
            
            return list(set(p))
        