class Solution:
    def largestOddNumber(self, num: str) -> str:
        while num:
            if int(num[-1])%2 == 1: #always check the last digit whenever the remainder is leaving 1 as output its odd
                return num
            num = num[:-1]
        return ""
        