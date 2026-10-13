class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size(); long long ans=0;
        vector<int>sqrs(n);
        for(int i=0;i<n;i++){
            sqrs[i]= 1LL*nums[i]*nums[i];
        }
      sort(sqrs.begin(), sqrs.end());
      int k = n/2;
      for(int i=0;i<k;i++){
        ans -= sqrs[i];
      }  for(int i=k;i<n;i++){
        ans += sqrs[i];
      }
      return ans;
    }
};