class Solution {
public:
    char findTheDifference(string s, string t) {
        int n =s.size();
        int m = t.size();
        int sums =0; int sumt =0;
        for(int i=0;i<n;i++){
            sums+= s[i];
        } for(int i=0;i<m;i++){
            sumt+= t[i];
        }
        return (char)(sumt-sums);
    }
};