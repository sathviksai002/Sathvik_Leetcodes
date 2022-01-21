class Solution:
    def hammingWeight(self, n: int) -> int:
        res = str(bin(n))
        c= 0
        for i in res:
            if i == "1":
                c+=1
        return c
        