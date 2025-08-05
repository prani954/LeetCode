class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt = 0;
        int f = fruits.size(), b = baskets.size();
        for(int i=0;i<f;i++){
            int temp = 1;
            for(int j=0;j<b;j++){
                if(fruits[i] <= baskets[j]){
                    baskets[j] = 0;
                    temp = 0;
                    break;
                }
            }
            cnt += temp;
        }
        return cnt;
    }
};