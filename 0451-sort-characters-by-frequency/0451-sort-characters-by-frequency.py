from collections import Counter
class Solution:
    def frequencySort(self, s: str) -> str:
        sCounter = Counter(s)
        ans = []
        for key, value in sorted(sCounter.items(), key = lambda x: -x[1]):
            ans += key * value
        return "".join(ans)