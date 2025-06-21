class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int> cnt;
        for(auto& ch: word){
            cnt[ch]++;
        }
        int ans = word.size();
        for(auto&[_, a]: cnt){
            int res = 0;
            for(auto&[_, b]: cnt){
                if(a>b){
                    res += b;
                }
                else if(b>a+k){
                    res += b-(a+k);
                }
            }
            ans = min(ans, res);
        }
        return ans;
    }
};