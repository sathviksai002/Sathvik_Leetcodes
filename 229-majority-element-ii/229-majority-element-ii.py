class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        m = len(nums)/3
        s = set(nums)
        l=[]
        for i in s:
            if nums.count(i)>m:
                l.append(i)
        
        return l
                
        