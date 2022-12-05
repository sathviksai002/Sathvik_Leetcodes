class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        freq = {}
        freq1 = {}
        for i in word1:
            if i in freq:
                freq[i]+=1
            else:
                freq[i] = 1
        for i in word2:
            if i in freq1:
                freq1[i]+=1
            else:
                freq1[i] = 1
        
        freqv = sorted(list(freq.values()))
        freqv1 = sorted(list(freq1.values()))
        freqs = set(freq.keys())
        freqs1 = set(freq1.keys())
        
        return freqv == freqv1 and freqs == freqs1
        