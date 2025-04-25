class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        long long res = 0, prefixSum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            prefixSum += nums[i]%modulo == k;
            res += mp[(prefixSum - k+modulo)%modulo];
            mp[prefixSum%modulo]++;
        }
        return res;
    }
};