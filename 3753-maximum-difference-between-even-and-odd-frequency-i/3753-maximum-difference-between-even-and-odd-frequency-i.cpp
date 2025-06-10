class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        int odd_val = 0, even_val = 999;
        for(auto it:mp){
            if(it.second%2 == 1){
                if(it.second>odd_val)
                    odd_val = it.second;
            }
            else{
                if(it.second<even_val){
                    even_val = it.second;
                }
            }
        }
        return (odd_val-even_val);
        
    }
};