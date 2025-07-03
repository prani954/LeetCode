class Solution {
public:
    char kthCharacter(int k) {
        string str = "a";
        while(str.length() < k){
            int size = str.length();
            for(int i=0;i<size;++i){
                char ch = 'a'+((str[i] - 'a'+1)%26);
                str += ch;
            }
        }
        return str[k-1];
    }
};