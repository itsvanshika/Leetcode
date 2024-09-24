class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        if(len(arr1)>len(arr2)):
            arr1,arr2 = arr2,arr1
        prefix_set=set()
        for i in arr2:
            while i and i not in prefix_set:
                prefix_set.add(i)
                i=i//10
        res=0
        for i in arr1:
            while i and i not in prefix_set:
                i=i//10
            if i:
                res=max(res,len(str(i)))
        return res