class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
       for(int i=0;i<n;i++){
       if(i==count(nums[i]))
       return i;
       }
       return -1;
    }
    int count(int m){
        int sum =0;
        while(m>0){
            sum += m%10;
            m /= 10;
        }
        return sum;
    }
};