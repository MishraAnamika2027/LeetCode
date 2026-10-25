class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int start = 0;
        int end = 0;
        while(end<nums.size()){
            if(nums[end] >= minK && nums[end] <= maxK) end++;
            else{
                int size = end - start;
                ans = ans + (1LL * size * (size + 1) / 2);
                end++;
                start = end;
            }
        }
        int size = end - start;
        ans = ans + (1LL * size * (size + 1) / 2);
        
        return ans;
    }
};