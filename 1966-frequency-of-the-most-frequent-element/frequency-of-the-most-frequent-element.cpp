class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long n = nums.size();
        sort(nums.begin(), nums.end());
        int l =0; long long sum =0;
        for(int i=0;i<n;i++){
            long long target = nums[i];
            sum += target;
            if((i-l+1)*target-sum>k){
                sum-= nums[l];
                l++;
            }
        }
        return n-l;
    }
};