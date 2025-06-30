class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0;
        int res = 0;
        for(int right=0; right < n; right++){
            if(nums[right]-nums[left] == 1){
                res = max(res, right-left+1);
            }
            while(nums[right]-nums[left] > 1){
                left++;
            }
        }
        return res;
    }
};