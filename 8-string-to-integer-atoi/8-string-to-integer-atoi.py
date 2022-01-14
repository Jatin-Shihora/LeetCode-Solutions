class Solution:
    def myAtoi(self, s: str) -> int:
        if len(s)==0: return 0
        
        i = 0
        while i<len(s) and s[i]==' ':
            i += 1
        if i==len(s): # all are leading whitespace
            return 0
        
        if s[i]=='+':
            sign = 1
            i += 1
        elif s[i]=='-':
            sign = -1
            i += 1
        else:
            sign = 1
        
        val = 0
        while i<len(s) and s[i].isdigit():
            val = val*10+ord(s[i])-ord('0')
            i += 1
            
        res = val*sign
        if res<-2**31: return -2**31
        elif res>2**31-1: return 2**31-1
        else: return res
