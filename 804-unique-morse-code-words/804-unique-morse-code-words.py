class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        
        freq = [".-","-...","-.-.","-..",".","..-.","--.",
                 "....","..",".---","-.-",".-..","--","-.",
                 "---",".--.","--.-",".-.","...","-","..-",
                 "...-",".--","-..-","-.--","--.."]
        s = {"".join(freq[ord(i)- ord('a')] for i in letters) for letters in words}
        
        return len(s)
        
        
        