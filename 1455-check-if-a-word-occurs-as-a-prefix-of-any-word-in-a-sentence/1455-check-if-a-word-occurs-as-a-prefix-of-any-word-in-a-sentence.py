class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        l=[]
        for i in sentence.split(' '):
            l.append(i)
        flag = -1
        for i in l:
            if i.startswith(searchWord):
                flag = l.index(i)+1
                break
        return flag
