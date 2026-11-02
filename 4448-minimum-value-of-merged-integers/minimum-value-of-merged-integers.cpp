class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=0;i<n;i+=2){
        int a = nums[i];
        int b = nums[i+1];
        int temp = b;
        while(temp>0){
            a *= 10;
            temp /= 10;
        }
        int merge = a+b;
        mini = min(mini, merge);
        }
        return mini;
    }
};