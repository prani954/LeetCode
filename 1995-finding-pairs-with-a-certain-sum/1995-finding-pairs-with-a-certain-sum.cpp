class FindSumPairs {
public:
    vector<int> arr1, arr2;
    unordered_map<int, int> mp; 
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
       arr1 = nums1;
       arr2 = nums2;
       for(int num:nums2){
            mp[num]++;
       } 
    }
    
    void add(int index, int val) {
        mp[arr2[index]]--;
        arr2[index] += val;
        mp[arr2[index]]++;
    }
    
    int count(int tot) {
        int cnt = 0;
        for(int num:arr1){
            cnt += mp[tot - num];
        }
        return cnt;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */