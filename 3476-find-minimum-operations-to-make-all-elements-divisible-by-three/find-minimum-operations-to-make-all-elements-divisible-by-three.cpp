class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size(); 
        int count =0;
        for(int x:nums){
           if(x%3!=0) count++;
        }
        return count;
    }
};