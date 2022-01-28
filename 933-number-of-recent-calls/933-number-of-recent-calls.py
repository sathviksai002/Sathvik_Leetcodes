class RecentCounter:

    def __init__(self):
        self.times = []
        

    def ping(self, t: int) -> int:
        self.times.append(t)
        return len(self.times) - bisect_left(self.times, t - 3000)
        


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)