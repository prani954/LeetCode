class Solution {
public:
    int countHillValley(vector<int>& nums) {
         int cnt = 0;
         int left = 0;
         for(int i=1;i<nums.size()-1;i++){
            if(nums[i] != nums[i+1]){
                if((nums[i]>nums[left] and nums[i]>nums[i+1]) or (nums[i] < nums[left] and nums[i] < nums[i+1])){
                    ++cnt;
                }
                left = i;
            }
         }
         return cnt;
    }
};