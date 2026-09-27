class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int reach =0; int jumps = 0;
        int curr =0;
        for(int i=0;i<n-1;i++){
            int count = nums[i];
            reach = max(reach, count+i);
            if(i==curr){
                jumps++;
                curr = reach;
            }
         
        }
        return jumps;
    }
};