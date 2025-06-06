class Solution {
public:
    string robotWithString(string s) {
        unordered_map<char, int> cnt;
        for(char ch:s){
            cnt[ch]++;
        }

        stack<char> st;
        string res;
        char ch = 'a';
        for(char c:s){
            st.emplace(c);
            cnt[c]--;
            while(ch != 'z' and cnt[ch] == 0){
                ch++;
            }
            while(!st.empty() and st.top() <= ch){
                res.push_back(st.top());
                st.pop();
            }
        }
        return res;
    }
};