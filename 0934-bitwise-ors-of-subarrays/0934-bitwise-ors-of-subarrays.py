class Solution:
    def subarrayBitwiseORs(self, arr: List[int]) -> int:
        res = set()
        curr = {0}
        for num in arr:
            curr = {num|val for val in curr} | {num}
            res |= curr
        return len(res)