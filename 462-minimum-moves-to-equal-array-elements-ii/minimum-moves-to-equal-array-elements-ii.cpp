class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int m = n/2;
        sort(nums.begin(), nums.end());
        int mid = nums[m];
        int count =0;
        for(int i=0;i<n;i++){
           if(nums[i]<mid){
            count += mid-nums[i];
           } else if(nums[i]>mid){
            count += nums[i]-mid;
           }
        }
        return count;
    }
};