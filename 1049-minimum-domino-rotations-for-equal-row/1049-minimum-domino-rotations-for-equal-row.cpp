class Solution {
public:
    int predicate(int target, vector<int>&tops, vector<int>& bottoms){
        int rotateTop = 0, rotateBottom = 0;
        int n = tops.size();
        for(int i=0;i<n;i++){
            if(tops[i]!=target and bottoms[i]!=target){
                return -1;
            }
            if(tops[i]!= target){
                rotateTop++;
            }
            if(bottoms[i] != target){
                rotateBottom++;
            }
        }
        return min(rotateTop, rotateBottom);
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int check = predicate(tops[0], tops, bottoms);
        if(check != -1){
            return check;
        }
        return predicate(bottoms[0], tops, bottoms);
    }
};