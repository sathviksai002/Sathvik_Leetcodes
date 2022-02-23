import numpy as np
class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        numpy_array= np.array(matrix)
        transp = numpy_array.T
        trans_list = transp.tolist()
        return trans_list