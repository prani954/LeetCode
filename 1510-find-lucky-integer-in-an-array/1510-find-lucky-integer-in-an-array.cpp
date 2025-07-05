class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int n = arr.size();
        int res = -1;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto& [num, cnt]: mp){
            int val = -1;
            if(num == cnt){
                val = num;
            }
            res = max(res, val);
        }
        return res;
    }
};