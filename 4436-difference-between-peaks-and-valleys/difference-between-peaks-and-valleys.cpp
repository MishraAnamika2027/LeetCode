class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> peak;
        vector<int> valley;
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                peak.push_back(nums[i]);
            } else if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) {
                valley.push_back(nums[i]);
            }
        }
        int s1 = 0;
        int s2 = 0;
        int n1 = peak.size();
        int n2 = valley.size();
        for (int i = 0; i < n1; i++) {
            s1 += peak[i];
        }
        for (int i = 0; i < n2; i++) {
            s2 += valley[i];
        }
        return s1 - s2;
    }
};