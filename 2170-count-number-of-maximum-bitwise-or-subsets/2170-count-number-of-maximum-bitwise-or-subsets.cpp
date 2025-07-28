class Solution {
public:
    int predicate(vector<int>& nums, int maxOR, int ind, int currOR){
        if(ind == nums.size()){
            return currOR == maxOR ? 1: 0;
        }

        if(currOR == maxOR){
            return 1<<(nums.size() - ind);
        }
        return predicate(nums, maxOR, ind+1, currOR | nums[ind]) + predicate(nums, maxOR, ind+1, currOR);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR = 0;
        for(int num:nums){
            maxOR |= num;
        }
        return predicate(nums, maxOR, 0, 0);
    }
};