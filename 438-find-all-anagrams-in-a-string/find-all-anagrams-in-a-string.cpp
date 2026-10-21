class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n= s.size(); int m= p.size();
        if(n<m) return {};
          vector<int> ans;
    vector<int> si(26, 0), pi(26, 0);
    int left =0, right= 0;
    while (right<m)
    {
        si[s[right] - 'a']++;
        pi[p[right] - 'a']++;
        right++;
    }
    right--;
    while (right <n)
    {
        if (si == pi)
        {
            ans.push_back(left);
        }
        si[s[left] - 'a']--;
        left++;
        right++;
        if (right != n)
        {
            si[s[right] - 'a']++;
        }
    }
    return ans;
    }
};