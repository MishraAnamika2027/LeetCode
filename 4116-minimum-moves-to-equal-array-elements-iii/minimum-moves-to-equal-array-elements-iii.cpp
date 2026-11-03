class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int sum =0; int count = maxi*n;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        return count-sum;
    }
};