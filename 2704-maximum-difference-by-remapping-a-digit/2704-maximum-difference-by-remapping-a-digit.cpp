class Solution {
public:
    int minMaxDifference(int num) {
        string str = to_string(num);
        string maxi = "";
        string mini = "";
        char ele = ' ';
        int n = str.size();
        for(int i=0;i<n;i++){
            if(str[i] != '9'){
                ele = str[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(ele == str[i]){
                maxi += '9';
            }
            else{
                maxi += str[i];
            }
            if(str[0] == str[i]){
                mini += '0';
            }
            else{
                mini += str[i];
            }
        }
        return stoi(maxi) - stoi(mini);
    }
};