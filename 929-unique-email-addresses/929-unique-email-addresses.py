class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        dic = {}
        for i in range(len(emails)):
            x = emails[i].split('@')
            modified = str(x[0].replace('.','').split('+')[0]) + '@' + x[1]
            if modified in dic:
                dic[modified]+=1
            else:
                dic[modified]=1
        return len(dic)