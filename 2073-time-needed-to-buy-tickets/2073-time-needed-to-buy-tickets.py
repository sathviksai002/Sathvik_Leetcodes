class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        
        time = 0
        for i in range(len(tickets)):
            if i < k:
                if tickets[i] > tickets[k]:
                    time+= tickets[k]
                else:
                    time += tickets[i]
            elif i==k:
                time += tickets[k]

            else:
                if tickets[i] < tickets[k]:
                    time += tickets[i]
                else:
                    time += tickets[k] - 1


        return time
        
