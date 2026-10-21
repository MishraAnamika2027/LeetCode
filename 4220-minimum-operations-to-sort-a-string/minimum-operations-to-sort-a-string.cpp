class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if(is_sorted(s.begin(), s.end())) return 0;
        if(n==2) return -1;
        char mini = 'z';
        char maxi = 'a';
        for(int i =0;i<n;i++){
            mini = min(mini, s[i]);
            maxi = max(maxi, s[i]);
        }
        if(s[0] == mini || s[n-1] == maxi){
            return 1;
        } for(int i=1;i<=n-2;i++){
            if(s[i]==mini || s[i]==maxi){
                return 2;
            }
        }
        return 3;
    }
};