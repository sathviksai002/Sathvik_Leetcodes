class Solution:
    def stoneGame(self, piles: List[int]) -> bool:
        if sum(piles) %2 != 0 and len(piles) % 2 == 0:
            return True
        else:
            return False
        