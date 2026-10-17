class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>>arr(n);
        for(int i=0;i<n;i++){
            int sum =0;
            int num = nums[i];
            while(num>0){ 
            sum += num%10;
            num /= 10;
            }
          arr[i] = {sum, nums[i]};
        }
        sort(arr.begin(), arr.end());
        int count =0;
           unordered_map<int, int>pos;
           for(int i=0;i<n;i++){
            pos[arr[i].second] = i;
           }
           vector<bool>visited(n, false);
          for (int i=0;i<n;i++) {
            if (visited[i] || pos[nums[i]] == i) {
                continue;
            }
            int j = i;
            int cycle= 0;
            while (!visited[j]){
                visited[j] = true;
                j = pos[nums[j]];
                cycle++;
            }
            count +=cycle-1;
        }
        return count;
    }
};