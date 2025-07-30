class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int curr_len = 0, max_len = 0;
        int max_val = *max_element(nums.begin(), nums.end());
        for(int i=n-1;i>=0;i--){
            if(nums[i] == max_val){
                curr_len++;
                max_len = max(max_len, curr_len);
            }
            else{
                curr_len = 0;
            }
        }
        return max_len;
    }
};