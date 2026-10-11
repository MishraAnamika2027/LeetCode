class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
      int l =0; int r=0;
      int sum =0; int mini = INT_MAX;
      for(l=0;l<n;l++){
        sum += nums[l];
        while(sum>=target){
        mini = min(mini, l-r+1);
        sum -= nums[r];
        r++;
        }
      }
      if(mini == INT_MAX){
        return 0;
      }
      return mini;
    }
};