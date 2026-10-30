class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        map<int, int>mp;
        for(int i:nums){
            mp[i]++;
        }   vector<int>ans;
      priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>minH;
        for(auto x:mp){
            minH.push({x.second,-x.first});
        }
        while(!minH.empty()){
            for(int i=0;i<minH.top().first;i++)
                ans.push_back(-minH.top().second);
            minH.pop();
        }
        return ans;
    }
};