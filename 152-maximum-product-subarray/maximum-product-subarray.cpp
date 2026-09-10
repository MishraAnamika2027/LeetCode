class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n =  nums.size();
        int maxi = 0; 
        int mx = *max_element(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            int product = nums[i];
           for(int j=i+1;j<n;j++){ 
             product *= nums[j];
                maxi = max(maxi, product);
           }
        }
        if(n==1) return nums[n-1];
        if(mx>maxi) return mx;
        else return maxi;
    }
};