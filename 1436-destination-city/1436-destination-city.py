class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        
        scity, ecity= set(), set()

        for scitys, ecitys in paths:
            scity.add(scitys)

            if scitys in ecity:
                ecity.remove(scitys)
            if ecitys not in scity:
                ecity.add(ecitys)
        return next(iter(ecity))


        
            