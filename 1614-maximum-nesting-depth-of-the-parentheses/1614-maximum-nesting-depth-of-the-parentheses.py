class Solution:
    def maxDepth(self, s: str) -> int:
        depth,o=0,0
        for i in range(len(s)):
            ch = s[i]
            if(ch=='('):
                o=o+1
            if(ch==')'):
                o=o-1
            depth=max(depth,o)
        return depth
        