class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long cnt = 0, res = 0;
        int max_ele = *max_element(nums.begin(), nums.end());
        for(int i=0, j=0;i<n;i++){
            if(nums[i] == max_ele){
                cnt++;
            }
            while(cnt == k){
                if(nums[j] == max_ele){
                    cnt--;
                }
                j++;
            }
            res += j;
        }
        return res;
    }
};