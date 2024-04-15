class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        res=len(students)
        cnt=Counter(students)
        for s in sandwiches:
            if cnt[s]>0:
                res=res-1
                cnt[s]=cnt[s]-1
            else:
                return res
        return res