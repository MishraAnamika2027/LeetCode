class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();
        vector<vector<bool>>isPalin(n, vector<bool>(n));
        for(int i=1;i<=n;i++){
            for(int l=0;l+i<=n;l++){
                int r= l+i-1;
                isPalin[l][r] = s[l]==s[r] && (i<=2 || isPalin[l+1][r-1]);
            }
        }
        vector<int>dp(n+1);
        for(int i=1;i<=n;i++){
            dp[i] = dp[i-1];
            for(int j=0;j+k<=i;j++){
                if(isPalin[j][i-1]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
        }
        return dp[n];
    }
};