class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        vector<string> str;
        if(n%k != 0 and k!=0){
            int a = n%k;
            int i= (k-a);
            while(i--){
                s.push_back(fill);
            }
        }
        for(int i=0;i<s.size();i+=k){
            str.push_back(s.substr(i, k));
        }
        return str;
    }
};