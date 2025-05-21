class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool temp = false;
        for (int row = 0; row < matrix.size(); row++) {
            if (matrix[row][0] == 0) temp = true;
            for (int col = 1; col < matrix[0].size(); col++) {
                if (matrix[row][col] == 0) {
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }

        for (int row = matrix.size() - 1; row >= 0; row--) {
            for (int col = matrix[0].size() - 1; col >= 1; col--) {
                if (matrix[row][0] == 0 || matrix[0][col] == 0) {
                    matrix[row][col] = 0;
                }
            }
            if (temp) {
                matrix[row][0] = 0;
            }
        }
    }
};