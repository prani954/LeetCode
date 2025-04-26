class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minPos = -1, maxPos = -1, badPos = -1;
        long long ans = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == minK){
                minPos = i;
            }
            if(nums[i]==maxK){
                maxPos = i;
            }
            if(nums[i]<minK or nums[i]>maxK){
                badPos = i;
            }
            int temp = min(maxPos, minPos);
            if(temp > badPos){
                ans += (temp-badPos);
            }
        }
        return ans;
    }
};