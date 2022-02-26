class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        l=[]
        for i in nums:
            if i not in l:
                l.append(i)
        l = sorted(l)
        l=l[::-1]
        if len(l)>=3:
            return l[2]
        else:
            return max(l)
