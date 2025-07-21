class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        res.push_back(s[0]);
        int cnt = 1;
        for(int i=1;i<s.size();i++){
            if(s[i] == res.back()){
                cnt++;
                if(cnt<3)res.push_back(s[i]);
            }
            else{
                cnt = 1;
                res.push_back(s[i]);
            }
        }
        return res;
    }
};