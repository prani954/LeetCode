class Solution {
public:
    char dfs(unordered_map<char, vector<char>>& adj, char curr, vector<int>& vis){
        vis[curr-'a'] = 1;
        char minCh = curr;
        for(char i:adj[curr]){
            if(vis[i-'a']==0){
                minCh = min(minCh, dfs(adj, i, vis));
            }
        }
        return minCh;
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        int n = s1.length();
        unordered_map<char, vector<char>> adj;

        for(int i=0;i<n;i++){
            char u = s1[i];
            char v = s2[i];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        string res;
        for(char i:baseStr){
            vector<int> vis(26, 0);
            char ch = dfs(adj, i, vis);
            res.push_back(ch);
        }
        return res;
    }
};