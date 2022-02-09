class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        m = ''                 # empty string to assign two patterns
        for i in range(len(s)):       # to start from 0 to the last index
            if s[i].isalpha():       # if the first index is alphabet 
                m = m+s[i]       # it will append to the empty string 

        m = m[::-1]          # reverse the string
        s = [x for x in s]        # store the occurances in list
        j = 0                     # to use the pattern pointer as the list
        for i in range(len(s)):   # for i in list
            if s[i].isalpha():    # if the list element is aplhabet
                s[i]= m[j]        # get each element from list, and store in that index
                j += 1          # increment j 

        return ''.join(s)      # join into new string, and append list elements
        