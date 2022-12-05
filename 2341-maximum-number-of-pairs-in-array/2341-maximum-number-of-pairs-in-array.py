class Solution:
    def numberOfPairs(self, nums: List[int]) -> List[int]:
        s = set(nums)
        c,cl=0,0
        for i in s:
            c+=divmod(nums.count(i),2)[0]
            cl+=divmod(nums.count(i),2)[1]
        return ([c,cl])