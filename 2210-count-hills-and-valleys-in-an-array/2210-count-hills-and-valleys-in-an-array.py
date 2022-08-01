class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        n = len(nums)
        res = nums[0]
        c = 0
        for i in range(1,n-1):
            if nums[i]!= nums[i+1]:
                if res < nums[i] > nums[i+1] or res>nums[i]<nums[i+1]:
                    c +=1
                res = nums[i]
        return c