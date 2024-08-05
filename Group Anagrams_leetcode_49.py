class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d=defaultdict(list)
        for st in strs:
            st_tuple=tuple(sorted(st))
            d[st_tuple].append(st)
        res=list(d.values())
        #print(d)
        return res
