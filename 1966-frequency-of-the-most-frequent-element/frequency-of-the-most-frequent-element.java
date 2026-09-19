class Solution {
    public int maxFrequency(int[] nums, int k) {
         long n = nums.length;
       Arrays.sort(nums);
        int l =0;  long sum =0;
        for(int i=0;i<n;i++){
             long target = nums[i];
            sum += target;
            if((i-l+1)*target-sum>k){
                sum-= nums[l];
                l++;
            }
        }
        return nums.length -l;
    }
}