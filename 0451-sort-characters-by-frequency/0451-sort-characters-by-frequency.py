class Solution:
    def frequencySort(self, s: str) -> str:
        freq = {}
        for i in s:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
        sorted_d = dict(sorted(freq.items(), key=operator.itemgetter(1),reverse=True))
        news = ''
        for k,v in sorted_d.items():
            news += k*(v)
        return news
        
        