class Solution:
    def findReplaceString(self, s: str, indices: List[int], sources: List[str], targets: List[str]) -> str:
        s1 = str(s[:])
        shift = 0
        for ind, source, target in sorted(zip(indices, sources, targets)):
            if s[ind:ind+len(source)] == source:
                ind = ind + shift
                s1 = s1[:ind] + target + s1[ind+len(source):]
                shift += len(target) - len(source)
        
        return(s1)
        