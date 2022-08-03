class Solution:
    def findKDistantIndices(self, nums: List[int], key: int, k: int) -> List[int]:
        inj = []
        for ind, elem in enumerate(nums):
            if elem == key:
                inj.append(ind)
        p = []
        for i in range(len(nums)):
            for j in inj:
                if abs(i - j) <= k:
                    p.append(i)
                    break
        return sorted(p)
