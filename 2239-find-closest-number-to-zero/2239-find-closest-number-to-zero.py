class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        l =nums[0]   #1
        for i in nums: #3
            if abs(l) == abs(i):  
                l = max(i,l)    
            elif abs(l) > abs(i): 
                l = i
        return (l)