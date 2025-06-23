class Solution {
private:
    int digit[100];
public:
    long long kMirror(int k, int n) {
        auto isPalindrome = [&](long long x) -> bool{
            int length = -1;
            while(x){
                ++length;
                digit[length] = x%k;
                x/= k;
            }
            for(int i=0,j=length; i<j;++i, --j){
                if(digit[i] != digit[j]){
                    return false;
                }
            }
            return true;
        };
        int left = 1, count = 0;
        long long ans = 0;
        while(count < n){
            int right = left*10;
            for(int i=0;i<2;++i){
                for(int j = left;j<right&&count<n;++j){
                    long long combined = j;
                    int x = (i==0 ? j/10:j);
                    while(x){
                        combined = combined*10+x%10;
                        x/=10;
                    }
                    if(isPalindrome(combined)){
                        ++count;
                        ans += combined;
                    }
                }
            }
            left = right;
        }
        return ans;
    }
};