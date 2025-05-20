class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> temp(nums.size() + 1, 0);
        for (const auto& q : queries) {
            temp[q[0]]++; 
            if (q[1] + 1 < nums.size())
                temp[q[1] + 1]--; 
        }

        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            cnt += temp[i];
            if (nums[i] > cnt)
                return false;
        }
        return true;
    }
};