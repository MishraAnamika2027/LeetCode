class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        long long sum = 0, ans = 0;
        int i = 0;
        for (int j = 0; j < n; j++) {
                  mp[nums[j]]++;
            sum += nums[j];
            if (j - i + 1 > k) {
                sum -= nums[i];
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                i++;
            }
            if (j - i + 1 == k && mp.size() == k)
                ans = max(ans, sum);
        }
        return ans;
    }
};