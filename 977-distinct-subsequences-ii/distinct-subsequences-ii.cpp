class Solution {
public:
    int distinctSubseqII(string s) {
        int n = s.size();
        int MOD = 1e9 + 7;
        vector<long long> dp(n + 1, 0);
        vector<int> last(26, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++) {
            char ch = s[i - 1];
            dp[i] = (2 * dp[i - 1]) % MOD;
            if (last[ch - 'a'] != 0) {
                dp[i] = (dp[i] - dp[last[ch - 'a'] - 1] + MOD) % MOD;
            }

            last[ch - 'a'] = i;
        }
        return (dp[n] - 1 + MOD) % MOD;
    }
};