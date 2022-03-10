class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        output = [len(s)]*len(s)

        for i in range(len(s)):
            for j in range(i,len(s)):
                if s[j] == c:
                    output[i]=abs(i-j)
                    break

        for i in range(len(s)-1,-1,-1):
            for j in range(i,-1,-1):
                if s[j] == c:
                    output[i]=min(output[i],abs(i-j))
                    break

        return output