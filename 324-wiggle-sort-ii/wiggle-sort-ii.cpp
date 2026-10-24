class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr = nums;
        sort(arr.begin(), arr.end());
        int j = (n-1)/2;
        int k = n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
          nums[i] = arr[j];
          j--;
        } else{
            nums[i] = arr[k];
            k--;
        }
        }
    }
};