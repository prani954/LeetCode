class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        string res = "none";
        if(nums[0]+nums[1]>nums[2]){
            if(nums[0] == nums[1]){
                if(nums[1] == nums[2]){
                    res = "equilateral";
                }
                else{
                    res = "isosceles";
                }
            }
            else if(nums[0]!=nums[1] and nums[1]!=nums[2] and nums[0]!=nums[2]){
                res = "scalene";
            }
            else if(nums[1] == nums[2]){
                res = "isosceles";
            }
        }
        return res;
    }
};