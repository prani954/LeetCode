class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> res;
        int last = -1;
        for (int i = 0; i < words.size(); ++i) {
            if (groups[i] != last) {
                res.push_back(words[i]);
                last = groups[i];
            }
        }
        return res;
    }
};