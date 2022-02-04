class Solution:
    def balancedStringSplit(self, s: str) -> int:
        lc,rc,c=0,0,0
        for i in s:
            if i=='L':
                lc+=1
            if i=='R':
                rc+=1
            if lc==rc:
                c+=1
                lc,rc=0,0
        
        return c