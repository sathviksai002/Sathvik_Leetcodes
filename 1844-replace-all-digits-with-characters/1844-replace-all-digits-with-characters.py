class Solution:
    def replaceDigits(self, s: str) -> str:
        st = ""
        for c,x in enumerate(s):
            if c%2!=0 and c!=0:
                prev= ord(s[c-1])
                new=prev+int(x)
                st+=chr(new)
            else:
                st+=x
        return st