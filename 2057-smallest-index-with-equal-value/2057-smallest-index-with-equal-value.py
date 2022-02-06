class Solution:
    def smallestEqual(self, nums: List[int]) -> int:
        flag=False
        m=0
        for i in range(len(nums)):
            if i % 10 == nums[i]:
                flag=True
                m=i
                break
        if flag==True:
            return m
        else:
            return -1
        
        