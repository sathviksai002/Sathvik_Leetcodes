class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        c,j=0,0
        for i in s:
            if j<len(g) and i >=g[j]:
                c += 1
                j += 1


        return c