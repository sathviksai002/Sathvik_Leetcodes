class Solution:
    def climbStairs(self, n: int) -> int:
        f, s = 0 ,1 
        for i in range(n):
            f,s = s, f+s
        return s