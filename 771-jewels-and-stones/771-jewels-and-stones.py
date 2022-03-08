class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        jewels = set(jewels)
        c = 0
        for i in jewels:
            for j in range(len(stones)):
                if i == stones[j]:
                    c += 1

        return(c)

        