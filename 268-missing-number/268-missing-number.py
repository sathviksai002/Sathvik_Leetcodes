class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        p=[]
        for i in range(0,len(nums)+1):
            p.append(i)
        q,w=sum(p),sum(nums)
        return q-w
        
        