class Solution {
public:
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        int n = tasks.size();
        int m = workers.size();
        int left = 0, right = min(n, m);
        sort(tasks.begin(), tasks.end());
        sort(workers.begin(), workers.end());

        while(left<right){
            int mid = (left+right+1)/2;
            int usedPills = 0;
            multiset<int> st(workers.end()-mid, workers.end());

            bool temp = true;
            for(int i=mid-1;i>=0;--i){
                auto it = prev(st.end());

                if(*it<tasks[i]){
                    it = st.lower_bound(tasks[i]-strength);
                    if(it == st.end()){
                        temp = false;
                        break;
                    }
                    ++usedPills;
                    if(usedPills>pills){
                        temp = false;
                        break;
                    }
                }
                st.erase(it);
            }
            if(temp){
                left = mid;
            }
            else{
                right = mid-1;
            }
        }
        return left;
    }
};