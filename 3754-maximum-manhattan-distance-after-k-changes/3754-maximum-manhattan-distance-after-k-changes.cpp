class Solution {
public:
    int maxDistance(string s, int k) {
        int x=0, y=0, res = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            switch(s[i]){
                case 'N':
                    x++;
                    break;
                case 'S':
                    x--;
                    break;
                case 'W':
                    y--;
                    break;
                case 'E':
                    y++;
                    break;
            }
            res = max(res, min(abs(x)+abs(y)+k*2, i+1));
        }
        return res;
    }
};