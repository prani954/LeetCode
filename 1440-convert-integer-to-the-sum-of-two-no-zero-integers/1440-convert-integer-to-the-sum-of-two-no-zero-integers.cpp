class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        auto cond = [](int a){
            while(a>0){
                if(a%10 == 0) return false;
                a /= 10;
            }
            return true;
        };
        for(int i=1;i<n;++i){
            int j = n-i;
            if(cond(i) and cond(j)){
                return {i, j};
            }
        }
        return {};
    }
};