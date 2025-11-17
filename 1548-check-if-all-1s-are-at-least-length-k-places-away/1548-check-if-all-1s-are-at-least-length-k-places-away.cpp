class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int res = -1e9;
        for(int i=0;i<nums.size();i++){
           if(nums[i] == 1){
            if(i - res <= k){
                return false;
            }
            res = i;
           }
        }
         return true;
    }
};