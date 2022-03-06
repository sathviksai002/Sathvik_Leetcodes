class Solution:
    def countPoints(self, rings: str) -> int:
        n = len(rings)
        mydict = {}
        for i in range(0,n,2):
            mydict[rings[i+1]] = mydict.get(rings[i+1], '') + rings[i]
        count = 0
        for value in mydict.values():
            if set(value) == {'R','G','B'}:
                count += 1
        return count