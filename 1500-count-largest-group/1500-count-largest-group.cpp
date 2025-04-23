class Solution {
public:
    int digit_sum(int n){
        int sum = 0;
        while(n!=0){
            sum += n%10;
            n = n/10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int cnt = 0;
        for(int i=1;i<=n;i++){
            int val = digit_sum(i);
            mp[val]++;
            cnt = max(cnt, mp[val]);
        }
        int res = 0;
        for(auto it:mp){
            if(it.second == cnt){
                res++;
            }
        }
        return res;
    }
};