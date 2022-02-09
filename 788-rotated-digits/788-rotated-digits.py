class Solution:
    def rotatedDigits(self, n: int) -> int:
        l = [x for x in range(1,n+1)]
        p={'0': '0', '1': '1', '8': '8', '2': '5', '5': '2', '6': '9', '9': '6'}
        ans = 0
        for i in l:
            s = str(i)
            q= ''
            for j in s:
                if j not in p:
                    q=''
                    break
                q += p[j]
            if q and int(q) != i:
                ans += 1


        return ans
        