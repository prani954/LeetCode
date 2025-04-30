class Solution {
public:
    int countNum(int num){
        int cnt = 0;
        while(num > 0){
            cnt++;
            num = num/10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(countNum(nums[i])%2 == 0){
                cnt++;
            }
        }
        return cnt;
    }
};