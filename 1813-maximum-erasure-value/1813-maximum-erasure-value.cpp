class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0, maxSum = 0;
        int n = nums.size();
        int currSum = 0;
        unordered_set<int> visited;
        for(int right=0;right<n;right++){
            while(visited.find(nums[right]) != visited.end()){
                currSum -= nums[left];
                visited.erase(nums[left]);
                left++;
            }
            currSum += nums[right];
            visited.insert(nums[right]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};