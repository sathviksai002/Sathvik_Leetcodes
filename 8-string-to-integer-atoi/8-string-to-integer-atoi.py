class Solution:
    def myAtoi(self, s: str) -> int:
        if s==False:
            return 0
        plusminus,numbers,index=1,0,0
        while index<len(s) and s[index]==' ':  #if the space is present it ignores and increments
            index+=1
        if index<len(s) and (s[index]=='-' or s[index]=='+'):     #if there is - and +
            if s[index]=='-':     #it ignores the + and when - is present the plusminus is set -1
                plusminus=-1
            index+=1
        while (index<len(s) and s[index].isdigit()):     #it ignores the aplhabets and returns digits
            numbers=(numbers*10)+int(s[index])       
            index+=1
        numbers=plusminus*numbers      #it multiplies with the sign of the integer
        result=self.limit(numbers)
        return result
        
        
        
    def limit(self,numb):
        if numb>(2**31)-1:    #if integer is out of range we need to clamp it down to the 2**31-1 
            return (2**31)-1    #return the clamped
        if numb<-1*(2**31):    #if integer is less than -2**31-1
            return -1*(2**31)
        return numb         #return the number after clamping
            
        
        
        