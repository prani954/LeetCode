class Solution {
public:
    int maxDiff(int num) {
        string str = to_string(num);
        char ele = ' ';
        string maxi = str;
        string mini = str;
        for(int i=0;i<str.size();i++){
            if(str[i] != '9'){
                ele = str[i];
                break;
            }
        }
        if (ele != ' ') {
            for (char& c : maxi) {
                if (c == ele) c = '9';
            }
        }
        char minEle = ' ';
        if (str[0] != '1') {
            minEle = str[0];
            for (char& c : mini) {
                if (c == minEle) c = '1';
            }
        } else {
            for (int i = 1; i < str.size(); i++) {
                if (str[i] != '0' && str[i] != '1') {
                    minEle = str[i];
                    break;
                }
            }
            if (minEle != ' ') {
                for (int i = 0; i < mini.size(); i++) {
                    if (mini[i] == minEle) mini[i] = '0';
                }
            }
        }
        return stoi(maxi) - stoi(mini);
    }
};
