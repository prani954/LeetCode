class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size(), m = moveTime[0].size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({0, 0, 0});
        moveTime[0][0] = 0;

        vector<vector<int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();
            int currTime = curr[0];
            int currRow = curr[1];
            int currCol = curr[2];
            if(currTime >= dp[currRow][currCol]) continue;
            if(currRow == n-1 and currCol == m-1){
                return currTime;
            }
            dp[currRow][currCol] = currTime;

            for(auto& d:dir){
                int nextRow = currRow+d[0];
                int nextCol = currCol+d[1];
                if(nextRow>=0 and nextRow < n and nextCol >=0 and nextCol < m and dp[nextRow][nextCol] == INT_MAX){
                    int nextTime = max(moveTime[nextRow][nextCol], currTime)+1;
                    pq.push({nextTime, nextRow, nextCol});
                }
            }
        }
        return -1;
    }
};