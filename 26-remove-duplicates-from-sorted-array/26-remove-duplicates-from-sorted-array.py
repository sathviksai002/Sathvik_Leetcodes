class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        leng=0
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                leng+=1
            else:
                nums[i-leng]=nums[i]
        return len(nums)-leng
       