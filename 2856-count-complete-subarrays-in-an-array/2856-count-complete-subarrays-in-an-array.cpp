class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxVal = mp.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            unordered_set<int> st;
            for(int j=i;j<n;j++){
                st.insert(nums[j]);
                if(st.size()==maxVal){
                    cnt += (n-j);
                    break;
                }
            }
        }
        return cnt;
    }
};