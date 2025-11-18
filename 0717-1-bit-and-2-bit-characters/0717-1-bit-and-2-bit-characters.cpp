class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int temp = 0;
        while (temp < bits.size() - 1) {
            temp += bits[temp] + 1;
        }
        return temp == bits.size() - 1;
    }
};