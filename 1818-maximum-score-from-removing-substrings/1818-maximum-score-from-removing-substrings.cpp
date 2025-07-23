class Solution {
public:
    int getGain(string& s, string targ){
        int ind = 0, cnt = 0;
        for(auto ch:s){
            s[ind] = ch;
            ind++;
            if(ind >= 2 and s[ind-1] == targ[1] and s[ind-2] == targ[0]){
                cnt++;
                ind -= 2;
            }
        }
        s.resize(ind);
        return cnt;
    }
    int maximumGain(string s, int x, int y) {
        int res = 0;
        int score1, score2;
        string a, b;
        if(y>x){
            a = "ba";
            score1 = y;
            b = "ab";
            score2 = x;
        }
        else{
            a = "ab";
            score1 = x;
            b = "ba";
            score2 = y;
        }
        res += getGain(s,a)*score1;
        res += getGain(s,b)*score2;
        return res;
    }
};