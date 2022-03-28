class Solution:
    def PredictTheWinner(self, nums: List[int]) -> bool:
        
        dp = [[(0, 0) for _ in range(len(nums))] for _ in range(len(nums))]
        
        
        # Individual elements.
        for i in range(len(nums)):
            dp[i][i] = (nums[i], 0)
            
        
        # General case.
        for window in range(2, len(nums) + 1):
            for start in range(len(nums) - window + 1):
                end = start + window - 1
                start_num = nums[start]
                end_num = nums[end]
                
                # P1 scores if picking either start or end.
                p1_start = start_num + dp[start + 1][end][1]
                p1_end = end_num + dp[start][end - 1][1]
                
                # P2 scores if P1 picks either start or end.
                p2_start = dp[start + 1][end][0]
                p2_end = dp[start][end - 1][0]
                
                # Pick max for P1.
                dp[start][end] = (p1_start, p2_start) if p1_start > p1_end else (p1_end, p2_end)
        
        # Final score.
        p1_score, p2_score = dp[0][len(nums) - 1]
        return p1_score >= p2_score