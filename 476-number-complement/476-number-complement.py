class Solution:
    def findComplement(self, num: int) -> int:
        l = bin(num)[2:]
        s =''
        for i in l:
            if i == '0':
                s += '1'
            elif i == '1':
                s += '0'
        x = int(s,2)
        return x