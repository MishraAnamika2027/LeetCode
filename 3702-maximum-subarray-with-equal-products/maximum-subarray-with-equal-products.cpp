class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 2;
        int num = 1;
        int st =0; int end=0;
        while(end<n){
            while(gcd(num, nums[end])>1){
                num /= nums[st];
                st++;
            }
            num *= nums[end];
            ans = max(ans, end-st+1);
            end++;
        }
        return ans;
    }
};