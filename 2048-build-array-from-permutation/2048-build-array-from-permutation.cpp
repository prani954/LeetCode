class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        for(int i=0;i<n;i++){
           temp.push_back(nums[nums[i]]);
        }
        return temp;
    }
};