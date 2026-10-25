class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans =0;
        vector<long long>store;
        for(int i =0;i<n;i++){
            string num = to_string(nums[i]);
            sort(num.rbegin(), num.rend());
            int arr = stoi(num);
            ans += nums[i];
            store.push_back(arr-nums[i]);
        }
        sort(store.rbegin(), store.rend());
        for(int i=0;i<k;i++){
            ans += store[i];
        }
        return ans;
    }
};