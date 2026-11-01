class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        long long mini = *min_element(nums.begin(), nums.end());
         int total = 0;
        for(int i: nums){
           total += i-mini;
        }
        return total;
    }
};