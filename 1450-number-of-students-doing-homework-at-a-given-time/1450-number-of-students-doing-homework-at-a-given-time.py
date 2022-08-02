class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        c=0
        for i,j in zip(startTime,endTime):
            for p in range(i,j+1):
                if p==queryTime:
                    c+=1
                    break
        return (c)
        