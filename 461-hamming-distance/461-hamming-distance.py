class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        o = bin(x^y)
        return (o.count('1'))