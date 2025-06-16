class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int max_val = -1;
        int diff = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>diff){
                max_val = max(max_val, nums[i]-diff);
            }
            else{
                diff = nums[i];
            }
        }
        return max_val;
    }
};