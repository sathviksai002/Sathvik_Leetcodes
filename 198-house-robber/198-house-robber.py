class Solution:
    def rob(self, nums: List[int]) -> int:
        
        prevHouseTotal, secondPrevHouseTotal = 0, 0
        
        for i in nums:
            temp = max(prevHouseTotal, secondPrevHouseTotal + i)
            secondPrevHouseTotal = prevHouseTotal
            prevHouseTotal = temp
        
        return prevHouseTotal