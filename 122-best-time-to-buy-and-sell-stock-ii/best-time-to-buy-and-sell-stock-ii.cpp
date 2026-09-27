class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int maxi =0;
        for(int x: prices){
            buy = min(buy, x);
            if(x>buy){
                maxi += x-buy;
                buy = x;
            }
        }
        return maxi;
    }
};