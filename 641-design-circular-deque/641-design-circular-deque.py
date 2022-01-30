class MyCircularDeque:

    def __init__(self, k: int):
        self.k = k
        self.count = 0
        self.f = []
        self.r = []
        

    def insertFront(self, value: int) -> bool:
        if self.count < self.k:
            self.f.append(value)
            self.count += 1
            return True
        else:
            return False
        

    def insertLast(self, value: int) -> bool:
        if self.count < self.k:
            self.r.append(value)
            self.count += 1
            return True
        else:
            return False
        
        

    def deleteFront(self) -> bool:
        if self.count != 0:
            if self.f:
                self.f.pop()
            elif self.r:
                self.r.pop(0)
            self.count -= 1
            return True
        else:
            return False
        

    def deleteLast(self) -> bool:
        if self.count != 0:
            if self.r:
                self.r.pop()
            elif self.f:
                self.f.pop(0)
            self.count -= 1
            return True
        else:
            return False
        

    def getFront(self) -> int:
        if self.f:
            return self.f[-1]
        elif self.r:
            return self.r[0]
        else:
            return -1
        

    def getRear(self) -> int:
        if self.r:
            return self.r[-1]
        elif self.f:
            return self.f[0]
        else:
            return -1
        

    def isEmpty(self) -> bool:
         if self.count == 0:
            return True
         else:
            return False
        

    def isFull(self) -> bool:
        if self.count == self.k:
            return True
        else:
            return False
        


# Your MyCircularDeque object will be instantiated and called as such:
# obj = MyCircularDeque(k)
# param_1 = obj.insertFront(value)
# param_2 = obj.insertLast(value)
# param_3 = obj.deleteFront()
# param_4 = obj.deleteLast()
# param_5 = obj.getFront()
# param_6 = obj.getRear()
# param_7 = obj.isEmpty()
# param_8 = obj.isFull()