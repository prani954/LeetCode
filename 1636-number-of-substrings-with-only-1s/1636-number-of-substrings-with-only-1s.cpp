class Solution {
public:
    long long numSub(string s) {
        long long res = 0, cnt = 0;
        const long long MOD = 1e9+7;
        for(char ch : s){
            if(ch == '1'){
                cnt += 1;
            }
            if(ch == '0'){
                res = (res + cnt * (cnt + 1) / 2 % MOD) % MOD;
                cnt = 0;
            }
        }
        if(cnt != 0){
            res = (res + cnt * (cnt + 1) / 2 % MOD) % MOD;
        }
        return res;
    }
};