class Solution:
    def minOperations(self, nums: List[int]) -> int:
        s = []
        ans = 0
        for i in nums:
            while s and s[-1] > i:
                s.pop()
            if i == 0:
                continue
            if not s or s[-1] < i:
               ans += 1
               s.append(i)
        return ans 
        