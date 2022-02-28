class Solution:
    def canJump(self, nums: List[int]) -> bool:
        result, stepsReq, stepsGained = True, 0, 0
        if(len(nums)>=2):
            for i in range(len(nums)-2, -1, -1):
                stepsReq += 1
                if nums[i]+stepsGained>=stepsReq:
                        stepsGained = stepsReq
            if stepsReq!=stepsGained:
                result = False
        return result
                
        