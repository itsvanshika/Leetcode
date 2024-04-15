class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        res=[]
        count=0
        for i in range(len(s)):
            ch=s[i]
            if(ch=="("):
                res.append(ch)
                count=count+1
            elif(ch==")" and count>0):
                res.append(ch)
                count=count-1
            elif(ch!=")"):
                res.append(ch)
        f=[]
        for c in res[::-1]:
            if(c=="(" and count>0):
                count=count-1
            else:
                f.append(c)
        return "".join(f[::-1])