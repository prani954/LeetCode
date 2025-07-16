class Solution:
    def maximumLength(self, nums: List[int]) -> int:
        n = len(nums)
        even_dp = 0
        odd_dp = 0
        cnt0 = 0
        cnt1 = 0

        for num in nums:
            if num%2 == 0:
                cnt0 += 1
            else:
                cnt1 += 1

        for num in nums:
            if num%2 == 0:
                even_dp = max(even_dp, odd_dp+1)
            else:
                odd_dp = max(even_dp+1, odd_dp)
        return max(cnt0, cnt1, even_dp, odd_dp)
        

        